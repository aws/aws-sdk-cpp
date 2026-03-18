/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/logging/LogMacros.h>
#include <aws/crt/Variant.h>

#include <algorithm>
#include <functional>
#include <aws/core/utils/memory/AWSMemory.h>
#include <utility>
#include <thread>
#include <type_traits>

namespace Aws {
namespace Utils {

enum class WaiterState { SUCCESS, RETRY, FAILURE };
enum class WaiterErrors { MAX_ATTEMPTS, INVALID_ACTION };

using ExpectedValue = Crt::Variant<int, bool, Aws::String>;
using WaiterError = Aws::Client::AWSError<WaiterErrors>;

template <typename OutcomeT>
using WaiterOutcome = Outcome<OutcomeT, WaiterError>;

template <typename OutcomeT>
struct Acceptor {
  WaiterState state;
  explicit Acceptor(WaiterState s) : state(s) {}
  virtual ~Acceptor() = default;
  virtual bool Matches(const OutcomeT& outcome) const = 0;
};

template <typename OutcomeT>
struct StatusAcceptor : Acceptor<OutcomeT> {
  int expectedStatus;
  StatusAcceptor(WaiterState s, int status) : Acceptor<OutcomeT>(s), expectedStatus(status) {}
  bool Matches(const OutcomeT& outcome) const override {
    return GetStatusCode(outcome) == expectedStatus;
  }

 private:
  template<typename T>
  struct HasGetHttpResponseCode {
    template<typename U> static auto test(int) -> decltype(std::declval<U>().GetHttpResponseCode(), std::true_type());
    template<typename> static std::false_type test(...);
    static constexpr bool value = decltype(test<T>(0))::value;
  };
  template<typename T>
  struct HasGetResponseCode {
    template<typename U> static auto test(int) -> decltype(std::declval<U>().GetResponseCode(), std::true_type());
    template<typename> static std::false_type test(...);
    static constexpr bool value = decltype(test<T>(0))::value;
  };
  template<typename T>
  static int GetStatusCodeFromResult(const T& result) {
    static_assert(HasGetHttpResponseCode<T>::value, "Result type must have GetHttpResponseCode() method");
    return static_cast<int>(result.GetHttpResponseCode());
  }
  template<typename T>
  static int GetStatusCodeFromError(const T& error) {
    static_assert(HasGetResponseCode<T>::value, "Error type must have GetResponseCode() method");
    return static_cast<int>(error.GetResponseCode());
  }
  static int GetStatusCode(const OutcomeT& outcome) {
    return outcome.IsSuccess()
      ? GetStatusCodeFromResult(outcome.GetResult())
      : GetStatusCodeFromError(outcome.GetError());
  }
};

template <typename OutcomeT>
struct ErrorAcceptor : Acceptor<OutcomeT> {
  ExpectedValue expected;
  ErrorAcceptor(WaiterState s, ExpectedValue e) : Acceptor<OutcomeT>(s), expected(std::move(e)) {}
  bool Matches(const OutcomeT& outcome) const override {
    if (this->expected.holds_alternative<bool>()) {
      return outcome.IsSuccess() != this->expected.get<bool>();
    }
    if (!outcome.IsSuccess()) {
      return outcome.GetError().GetExceptionName() == this->expected.get<Aws::String>();
    }
    return false;
  }
};

template <typename OutcomeT>
using PathMatcherFn = std::function<bool(const OutcomeT&, const ExpectedValue&)>;

template <typename OutcomeT>
struct PathAcceptor : Acceptor<OutcomeT> {
  ExpectedValue expected;
  PathMatcherFn<OutcomeT> pathMatcher;
  PathAcceptor(WaiterState s, ExpectedValue e, PathMatcherFn<OutcomeT> pm)
      : Acceptor<OutcomeT>(s), expected(std::move(e)), pathMatcher(std::move(pm)) {}
  bool Matches(const OutcomeT& outcome) const override {
    return pathMatcher ? pathMatcher(outcome, expected) : false;
  }
};


template <typename RequestT, typename OutcomeT>
class Waiter {
 public:
  using AcceptorPtr = Aws::UniquePtr<Acceptor<OutcomeT>>;

  Waiter(int delay, int maxAttempts, Aws::Vector<AcceptorPtr> acceptors, std::function<OutcomeT(const RequestT&)> op,
         const Aws::String& waiterName = "Waiter")
      : m_delay(delay),
        m_maxAttempts(maxAttempts),
        m_acceptors(std::move(acceptors)),
        m_operation(std::move(op)),
        m_name(waiterName) {}

  WaiterOutcome<OutcomeT> Wait(const RequestT& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::WAITER);
    for (int attempt = 0; attempt < m_maxAttempts; ++attempt) {
      auto outcome = m_operation(request);

      auto matched = std::find_if(m_acceptors.begin(), m_acceptors.end(),
                             [&outcome](const AcceptorPtr& acceptor) -> bool { return acceptor->Matches(outcome); });
      if (matched != m_acceptors.end()) {
        switch (matched->get()->state) {
          case WaiterState::SUCCESS:
            return WaiterOutcome<OutcomeT>(outcome);
          case WaiterState::FAILURE:
            return WaiterOutcome<OutcomeT>(WaiterError(WaiterErrors::INVALID_ACTION, "",
                "Waiter matched a failure acceptor", false /*retryable*/));
          case WaiterState::RETRY:
            break; // continue polling
        }
      } else if (!outcome.IsSuccess()) {
        // No acceptor matched and an error was encountered: transition to failure
        return WaiterOutcome<OutcomeT>(WaiterError(WaiterErrors::INVALID_ACTION, "",
            "No acceptor matched and an error was encountered", false /*retryable*/));
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
  Aws::Vector<AcceptorPtr> m_acceptors;
  std::function<OutcomeT(const RequestT&)> m_operation;
  Aws::String m_name;

};
}  // namespace Utils
}  // namespace Aws
