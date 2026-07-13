/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AuthType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The connection parameters for a Google Drive data source. Provide these
 * parameters in the <code>DataSourceParameters</code> object when you create or
 * update a data source that uses Google Drive.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GoogleDriveParameters">AWS
 * API Reference</a></p>
 */
class GoogleDriveParameters {
 public:
  AWS_QUICKSIGHT_API GoogleDriveParameters() = default;
  AWS_QUICKSIGHT_API GoogleDriveParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API GoogleDriveParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The authentication type for the Google Drive data source. Valid values
   * include:</p> <ul> <li> <p> <code>SERVICE_ACCOUNT</code> – Server-to-server
   * authentication using a Google service account key.</p> </li> <li> <p>
   * <code>THREE_LEGGED_OAUTH</code> – Interactive OAuth that requires user
   * consent.</p> </li> </ul>
   */
  inline AuthType GetAuthType() const { return m_authType; }
  inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
  inline void SetAuthType(AuthType value) {
    m_authTypeHasBeenSet = true;
    m_authType = value;
  }
  inline GoogleDriveParameters& WithAuthType(AuthType value) {
    SetAuthType(value);
    return *this;
  }
  ///@}
 private:
  AuthType m_authType{AuthType::NOT_SET};
  bool m_authTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
