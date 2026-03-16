/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/logging/LogMacros.h>
#include <aws/crt/Variant.h>

#include <algorithm>
#include <functional>
#include <utility>
#include <thread>
#include <type_traits>

namespace Aws {
namespace Utils {

enum class WaiterState { SUCCESS, RETRY, FAILURE };
enum class MatcherType { STATUS, ERROR, PATH, PATH_ALL, PATH_ANY };
enum class WaiterErrors { MAX_ATTEMPTS, INVALID_ACTION };

using ExpectedValue = Crt::Variant<int, bool, Aws::String>;
using WaiterError = Aws::Client::AWSError<WaiterErrors>;

template <typename OutcomeT>
using WaiterOutcome = Outcome<OutcomeT, WaiterError>;

template <typename OutcomeT>
struct Acceptor {
  WaiterState state;
  MatcherType matcher;
  ExpectedValue expected;
  std::function<bool(const OutcomeT&, const ExpectedValue&)> pathMatcher;

  Acceptor(WaiterState s, MatcherType m, ExpectedValue e, std::function<bool(const OutcomeT&, const ExpectedValue&)> pm = [](const OutcomeT&, const ExpectedValue&) { return false; })
      : state(s), matcher(m), expected(std::move(e)), pathMatcher(std::move(pm)) {}
};

template <typename OutcomeT>
using PathMatcher = std::function<bool(const OutcomeT&, const ExpectedValue&)>;

template <typename RequestT, typename OutcomeT>
class Waiter {
  bool Matches(const Acceptor<OutcomeT>& acceptor, const OutcomeT& outcome) {
    switch (acceptor.matcher) {
      case MatcherType::STATUS: {
        int status = GetStatusCode(outcome);
        return status == acceptor.expected.template get<int>();
      }
      case MatcherType::ERROR: {
        if (acceptor.expected.template holds_alternative<bool>()) {
          bool expectError = acceptor.expected.template get<bool>();
          return outcome.IsSuccess() != expectError;
        }
        if (!outcome.IsSuccess()) {
          auto errorCode = outcome.GetError().GetExceptionName();
          return errorCode == acceptor.expected.template get<Aws::String>();
        }
        return false;
      }
      case MatcherType::PATH:
      case MatcherType::PATH_ALL:
      case MatcherType::PATH_ANY:
        return acceptor.pathMatcher ? acceptor.pathMatcher(outcome, acceptor.expected) : false;
    }
    return false;
  }

 public:
  Waiter(int delay, int maxAttempts, std::vector<Acceptor<OutcomeT>> acceptors, std::function<OutcomeT(const RequestT&)> op,
         const Aws::String& waiterName = "Waiter")
      : m_delay(delay),
        m_maxAttempts(maxAttempts),
        m_acceptors(std::move(acceptors)),
        m_operation(std::move(op)),
        m_name(waiterName) {}

  WaiterOutcome<OutcomeT> Wait(const RequestT& request) {
    for (int attempt = 0; attempt < m_maxAttempts; ++attempt) {
      auto outcome = m_operation(request);

      auto matched = std::find_if(m_acceptors.begin(), m_acceptors.end(),
                             [this, &outcome](const Acceptor<OutcomeT>& acceptor) -> bool { return Matches(acceptor, outcome); });
      if (matched != m_acceptors.end()) {
        return WaiterOutcome<OutcomeT>(outcome);
      }

      if (attempt < m_maxAttempts - 1) {
        std::this_thread::sleep_for(std::chrono::seconds(m_delay));
      }
    }
    AWS_LOG_TRACE(m_name.c_str(), "Waiter hit max attempts");
    return WaiterOutcome<OutcomeT>(WaiterError(WaiterErrors::MAX_ATTEMPTS, "", "Max attempts for operation reached", false /*retryable*/));
  }

private:
  int m_delay;
  int m_maxAttempts;
  std::vector<Acceptor<OutcomeT>> m_acceptors;
  std::function<OutcomeT(const RequestT&)> m_operation;
  Aws::String m_name;
  /**
   * Returns the HTTP status code from the result or error.
   * Result objects use GetHttpResponseCode(), errors use GetResponseCode().
   */
  inline int GetStatusCode(OutcomeT outcome) const { 
    return outcome.IsSuccess() 
      ? GetStatusCodeFromResult(outcome.GetResult()) 
      : GetStatusCodeFromError(outcome.GetError()); 
  }

  template<typename T>
  struct has_get_http_response_code
  {
      template<typename U>
      static auto test(int) -> decltype(std::declval<U>().GetHttpResponseCode(), std::true_type());

      template<typename>
      static std::false_type test(...);

      static constexpr bool value = decltype(test<T>(0))::value;
  };

  template<typename T>
  struct has_get_response_code
  {
      template<typename U>
      static auto test(int) -> decltype(std::declval<U>().GetResponseCode(), std::true_type());

      template<typename>
      static std::false_type test(...);

      static constexpr bool value = decltype(test<T>(0))::value;
  };

  template<typename T>
  static int GetStatusCodeFromResult(const T& result)
  {
      static_assert(has_get_http_response_code<T>::value, "Result type must have GetHttpResponseCode() method");
      return static_cast<int>(result.GetHttpResponseCode());
  }

  template<typename T>
  static int GetStatusCodeFromError(const T& error)
  {
      static_assert(has_get_response_code<T>::value, "Error type must have GetResponseCode() method");
      return static_cast<int>(error.GetResponseCode());
  }

};
}  // namespace Utils
}  // namespace Aws
