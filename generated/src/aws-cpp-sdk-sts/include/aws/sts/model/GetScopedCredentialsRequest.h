/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sts/STSRequest.h>
#include <aws/sts/STS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace STS {
namespace Model {

/**
 */
class GetScopedCredentialsRequest : public STSRequest {
 public:
  AWS_STS_API GetScopedCredentialsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetScopedCredentials"; }

  AWS_STS_API Aws::String SerializePayload() const override;

 protected:
  AWS_STS_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>An IAM policy in JSON format that you want to use as a scope down policy.</p>
   * <p>A request must provide at least one of <code>Policy</code> or
   * <code>DurationSeconds</code>. Both parameters are optional individually, but you
   * must specify at least one of them.</p> <p>The resulting session's permissions
   * are the intersection of the calling session's existing permissions and this
   * scope down policy. You cannot use this scope down policy to grant more
   * permissions than the calling session already has.</p> <p>The plaintext of the
   * scope down policy cannot exceed 2,048 characters. The JSON policy characters can
   * be any ASCII character from the space character to the end of the valid
   * character list (\u0020 through \u00FF). It can also include the tab (\u0009),
   * linefeed (\u000A), and carriage return (\u000D) characters.</p>  <p>An
   * internal conversion compresses the inline scope down policy into a packed binary
   * format that has a separate limit. If the packed policy exceeds this limit, the
   * request fails with <code>PackedPolicyTooLarge</code>.</p> <p>If the document is
   * not valid IAM policy JSON, the request fails with
   * <code>MalformedPolicyDocument</code>.</p>
   */
  inline const Aws::String& GetPolicy() const { return m_policy; }
  inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
  template <typename PolicyT = Aws::String>
  void SetPolicy(PolicyT&& value) {
    m_policyHasBeenSet = true;
    m_policy = std::forward<PolicyT>(value);
  }
  template <typename PolicyT = Aws::String>
  GetScopedCredentialsRequest& WithPolicy(PolicyT&& value) {
    SetPolicy(std::forward<PolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration, in seconds, of the resulting scoped down credentials. The value
   * can range from 1 second to 129,600 seconds (36 hours).</p> <p>If you do not
   * specify this value, the scoped down credentials will inherit the calling
   * session's expiration time.</p>
   */
  inline int GetDurationSeconds() const { return m_durationSeconds; }
  inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
  inline void SetDurationSeconds(int value) {
    m_durationSecondsHasBeenSet = true;
    m_durationSeconds = value;
  }
  inline GetScopedCredentialsRequest& WithDurationSeconds(int value) {
    SetDurationSeconds(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetMinimumSessionTokenSize() const { return m_minimumSessionTokenSize; }
  inline bool MinimumSessionTokenSizeHasBeenSet() const { return m_minimumSessionTokenSizeHasBeenSet; }
  inline void SetMinimumSessionTokenSize(int value) {
    m_minimumSessionTokenSizeHasBeenSet = true;
    m_minimumSessionTokenSize = value;
  }
  inline GetScopedCredentialsRequest& WithMinimumSessionTokenSize(int value) {
    SetMinimumSessionTokenSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A caller-supplied description of the scoped session. The value cannot exceed
   * 256 characters. This description is logged to CloudTrail for the request, so you
   * can use it to record the purpose of the scoped session.</p>
   */
  inline const Aws::String& GetScopedSessionDescription() const { return m_scopedSessionDescription; }
  inline bool ScopedSessionDescriptionHasBeenSet() const { return m_scopedSessionDescriptionHasBeenSet; }
  template <typename ScopedSessionDescriptionT = Aws::String>
  void SetScopedSessionDescription(ScopedSessionDescriptionT&& value) {
    m_scopedSessionDescriptionHasBeenSet = true;
    m_scopedSessionDescription = std::forward<ScopedSessionDescriptionT>(value);
  }
  template <typename ScopedSessionDescriptionT = Aws::String>
  GetScopedCredentialsRequest& WithScopedSessionDescription(ScopedSessionDescriptionT&& value) {
    SetScopedSessionDescription(std::forward<ScopedSessionDescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policy;

  int m_durationSeconds{0};

  int m_minimumSessionTokenSize{0};

  Aws::String m_scopedSessionDescription;
  bool m_policyHasBeenSet = false;
  bool m_durationSecondsHasBeenSet = false;
  bool m_minimumSessionTokenSizeHasBeenSet = false;
  bool m_scopedSessionDescriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace STS
}  // namespace Aws
