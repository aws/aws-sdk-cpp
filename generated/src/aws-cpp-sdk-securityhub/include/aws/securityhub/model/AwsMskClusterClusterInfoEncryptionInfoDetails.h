/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails.h>
#include <aws/securityhub/model/AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails.h>
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
   * <p> Includes encryption-related information, such as the KMS key used for
   * encrypting data at rest and whether you want MSK to encrypt your data in
   * transit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsMskClusterClusterInfoEncryptionInfoDetails">AWS
   * API Reference</a></p>
   */
  class AwsMskClusterClusterInfoEncryptionInfoDetails
  {
  public:
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoEncryptionInfoDetails() = default;
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoEncryptionInfoDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoEncryptionInfoDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The settings for encrypting data in transit.</p>
     */
    inline const AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails& GetEncryptionInTransit() const { return m_encryptionInTransit; }
    inline bool EncryptionInTransitHasBeenSet() const { return m_encryptionInTransitHasBeenSet; }
    template<typename EncryptionInTransitT = AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails>
    void SetEncryptionInTransit(EncryptionInTransitT&& value) { m_encryptionInTransitHasBeenSet = true; m_encryptionInTransit = std::forward<EncryptionInTransitT>(value); }
    template<typename EncryptionInTransitT = AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails>
    AwsMskClusterClusterInfoEncryptionInfoDetails& WithEncryptionInTransit(EncryptionInTransitT&& value) { SetEncryptionInTransit(std::forward<EncryptionInTransitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The data-volume encryption details. You can't update encryption at rest
     * settings for existing clusters.</p>
     */
    inline const AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails& GetEncryptionAtRest() const { return m_encryptionAtRest; }
    inline bool EncryptionAtRestHasBeenSet() const { return m_encryptionAtRestHasBeenSet; }
    template<typename EncryptionAtRestT = AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails>
    void SetEncryptionAtRest(EncryptionAtRestT&& value) { m_encryptionAtRestHasBeenSet = true; m_encryptionAtRest = std::forward<EncryptionAtRestT>(value); }
    template<typename EncryptionAtRestT = AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails>
    AwsMskClusterClusterInfoEncryptionInfoDetails& WithEncryptionAtRest(EncryptionAtRestT&& value) { SetEncryptionAtRest(std::forward<EncryptionAtRestT>(value)); return *this;}
    ///@}
  private:

    AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails m_encryptionInTransit;
    bool m_encryptionInTransitHasBeenSet = false;

    AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails m_encryptionAtRest;
    bool m_encryptionAtRestHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
