/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails.h>
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
   * <p> The location in Amazon Simple Storage Service (Amazon S3) where query and
   * calculation results are stored and the encryption option, if any, used for query
   * and calculation results. These are known as client-side settings. If workgroup
   * settings override client-side settings, then the query uses the workgroup
   * settings. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAthenaWorkGroupConfigurationResultConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsAthenaWorkGroupConfigurationResultConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAthenaWorkGroupConfigurationResultConfigurationDetails() = default;
    AWS_SECURITYHUB_API AwsAthenaWorkGroupConfigurationResultConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAthenaWorkGroupConfigurationResultConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the method used to encrypt the user’s data stores in the Athena
     * workgroup. </p>
     */
    inline const AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails>
    AwsAthenaWorkGroupConfigurationResultConfigurationDetails& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}
  private:

    AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
