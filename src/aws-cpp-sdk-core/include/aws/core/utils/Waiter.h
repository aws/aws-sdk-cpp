/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/logging/LogMacros.h>
#include <aws/crt/Variant.h>

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

struct Acceptor {
  WaiterState state;
  MatcherType matcher;
  ExpectedValue expected;
};

template <typename OutcomeT>
using PathMatcher = std::function<bool(const OutcomeT&, const ExpectedValue&)>;

template <typename RequestT, typename OutcomeT>
class Waiter {
  int delay;
  int maxAttempts;
  std::vector<Acceptor> acceptors;
  std::function<OutcomeT(const RequestT&)> operation;
  Aws::String name;
  PathMatcher<OutcomeT> pathMatcher;

  bool Matches(const Acceptor& acceptor, const OutcomeT& outcome) {
    switch (acceptor.matcher) {
      case MatcherType::STATUS: {
        int status = GetStatusCode(outcome);
        return status == acceptor.expected.get<int>();
      }
      case MatcherType::ERROR: {
        if (acceptor.expected.holds_alternative<bool>()) {
          bool expectError = acceptor.expected.get<bool>();
          return outcome.IsSuccess() != expectError;
        }
        if (!outcome.IsSuccess()) {
          auto errorCode = outcome.GetError().GetExceptionName();
          return errorCode == acceptor.expected.get<Aws::String>();
        }
        return false;
      }
      case MatcherType::PATH:
      case MatcherType::PATH_ALL:
      case MatcherType::PATH_ANY:
        return pathMatcher ? pathMatcher(outcome, acceptor.expected) : false;
    }
    return false;
  }

 public:
  Waiter(int delay, int maxAttempts, std::vector<Acceptor> acceptors, std::function<OutcomeT(const RequestT&)> op,
         const Aws::String& waiterName = "Waiter", PathMatcher<OutcomeT> pathMatcher = nullptr)
      : delay(delay),
        maxAttempts(maxAttempts),
        acceptors(std::move(acceptors)),
        operation(std::move(op)),
        name(waiterName),
        pathMatcher(std::move(pathMatcher)) {}

  WaiterOutcome<OutcomeT> Wait(const RequestT& request) {
    for (int attempt = 0; attempt < maxAttempts; ++attempt) {
      auto outcome = operation(request);

      for (const auto& acceptor : acceptors) {
        if (Matches(acceptor, outcome)) {
          return outcome;
        }
      }

      if (attempt < maxAttempts - 1) {
        std::this_thread::sleep_for(std::chrono::seconds(delay));
      }
    }
    AWS_LOG_TRACE(name.c_str(), "Waiter hit max attempts");
    return WaiterError(WaiterErrors::MAX_ATTEMPTS, "", "Max attempts for operation reached", false /*retryable*/);;
  }
private:
  /**
   * Returns the HTTP status code from the result or error.
   * Fails at compile time if GetResponseCode() is not available.
   */
  inline int GetStatusCode(OutcomeT outcome) const { return outcome.IsSuccess() ? GetStatusCodeFrom(outcome.GetResult()) : GetStatusCodeFrom(outcome.GetError()); }

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
  static int GetStatusCodeFrom(const T& obj)
  {
      static_assert(has_get_response_code<T>::value, "Type must have GetResponseCode() method");
      return static_cast<int>(obj.GetResponseCode());
  }

};
}  // namespace Utils
}  // namespace Aws
