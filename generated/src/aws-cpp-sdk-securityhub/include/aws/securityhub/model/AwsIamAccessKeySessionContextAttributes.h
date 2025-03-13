/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Attributes of the session that the key was used for.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamAccessKeySessionContextAttributes">AWS
   * API Reference</a></p>
   */
  class AwsIamAccessKeySessionContextAttributes
  {
  public:
    AWS_SECURITYHUB_API AwsIamAccessKeySessionContextAttributes() = default;
    AWS_SECURITYHUB_API AwsIamAccessKeySessionContextAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamAccessKeySessionContextAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the session used multi-factor authentication (MFA).</p>
     */
    inline bool GetMfaAuthenticated() const { return m_mfaAuthenticated; }
    inline bool MfaAuthenticatedHasBeenSet() const { return m_mfaAuthenticatedHasBeenSet; }
    inline void SetMfaAuthenticated(bool value) { m_mfaAuthenticatedHasBeenSet = true; m_mfaAuthenticated = value; }
    inline AwsIamAccessKeySessionContextAttributes& WithMfaAuthenticated(bool value) { SetMfaAuthenticated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the session was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    AwsIamAccessKeySessionContextAttributes& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}
  private:

    bool m_mfaAuthenticated{false};
    bool m_mfaAuthenticatedHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
