/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa-serverless/MWAAServerlessRequest.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

namespace Aws {
namespace MWAAServerless {
namespace Model {

/**
 */
class CreateAirflowUiUrlRequest : public MWAAServerlessRequest {
 public:
  AWS_MWAASERVERLESS_API CreateAirflowUiUrlRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAirflowUiUrl"; }

  AWS_MWAASERVERLESS_API Aws::String SerializePayload() const override;

  AWS_MWAASERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the number of seconds that the launch URL stays valid. This value
   * limits only the time to open the URL, not the length of the UI session. The
   * default is 300.</p>
   */
  inline int GetExpiresInSeconds() const { return m_expiresInSeconds; }
  inline bool ExpiresInSecondsHasBeenSet() const { return m_expiresInSecondsHasBeenSet; }
  inline void SetExpiresInSeconds(int value) {
    m_expiresInSecondsHasBeenSet = true;
    m_expiresInSeconds = value;
  }
  inline CreateAirflowUiUrlRequest& WithExpiresInSeconds(int value) {
    SetExpiresInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the number of seconds that the UI session lasts, starting from when
   * you call this operation. The default is 43200 (12 hours).</p>
   */
  inline int GetSessionDurationInSeconds() const { return m_sessionDurationInSeconds; }
  inline bool SessionDurationInSecondsHasBeenSet() const { return m_sessionDurationInSecondsHasBeenSet; }
  inline void SetSessionDurationInSeconds(int value) {
    m_sessionDurationInSecondsHasBeenSet = true;
    m_sessionDurationInSeconds = value;
  }
  inline CreateAirflowUiUrlRequest& WithSessionDurationInSeconds(int value) {
    SetSessionDurationInSeconds(value);
    return *this;
  }
  ///@}
 private:
  int m_expiresInSeconds{0};

  int m_sessionDurationInSeconds{0};
  bool m_expiresInSecondsHasBeenSet = false;
  bool m_sessionDurationInSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
