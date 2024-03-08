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
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoEncryptionInfoDetails();
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoEncryptionInfoDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoEncryptionInfoDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The settings for encrypting data in transit.</p>
     */
    inline const AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails& GetEncryptionInTransit() const{ return m_encryptionInTransit; }

    /**
     * <p> The settings for encrypting data in transit.</p>
     */
    inline bool EncryptionInTransitHasBeenSet() const { return m_encryptionInTransitHasBeenSet; }

    /**
     * <p> The settings for encrypting data in transit.</p>
     */
    inline void SetEncryptionInTransit(const AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails& value) { m_encryptionInTransitHasBeenSet = true; m_encryptionInTransit = value; }

    /**
     * <p> The settings for encrypting data in transit.</p>
     */
    inline void SetEncryptionInTransit(AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails&& value) { m_encryptionInTransitHasBeenSet = true; m_encryptionInTransit = std::move(value); }

    /**
     * <p> The settings for encrypting data in transit.</p>
     */
    inline AwsMskClusterClusterInfoEncryptionInfoDetails& WithEncryptionInTransit(const AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails& value) { SetEncryptionInTransit(value); return *this;}

    /**
     * <p> The settings for encrypting data in transit.</p>
     */
    inline AwsMskClusterClusterInfoEncryptionInfoDetails& WithEncryptionInTransit(AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails&& value) { SetEncryptionInTransit(std::move(value)); return *this;}


    /**
     * <p> The data-volume encryption details. You can't update encryption at rest
     * settings for existing clusters.</p>
     */
    inline const AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails& GetEncryptionAtRest() const{ return m_encryptionAtRest; }

    /**
     * <p> The data-volume encryption details. You can't update encryption at rest
     * settings for existing clusters.</p>
     */
    inline bool EncryptionAtRestHasBeenSet() const { return m_encryptionAtRestHasBeenSet; }

    /**
     * <p> The data-volume encryption details. You can't update encryption at rest
     * settings for existing clusters.</p>
     */
    inline void SetEncryptionAtRest(const AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails& value) { m_encryptionAtRestHasBeenSet = true; m_encryptionAtRest = value; }

    /**
     * <p> The data-volume encryption details. You can't update encryption at rest
     * settings for existing clusters.</p>
     */
    inline void SetEncryptionAtRest(AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails&& value) { m_encryptionAtRestHasBeenSet = true; m_encryptionAtRest = std::move(value); }

    /**
     * <p> The data-volume encryption details. You can't update encryption at rest
     * settings for existing clusters.</p>
     */
    inline AwsMskClusterClusterInfoEncryptionInfoDetails& WithEncryptionAtRest(const AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails& value) { SetEncryptionAtRest(value); return *this;}

    /**
     * <p> The data-volume encryption details. You can't update encryption at rest
     * settings for existing clusters.</p>
     */
    inline AwsMskClusterClusterInfoEncryptionInfoDetails& WithEncryptionAtRest(AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails&& value) { SetEncryptionAtRest(std::move(value)); return *this;}

  private:

    AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails m_encryptionInTransit;
    bool m_encryptionInTransitHasBeenSet = false;

    AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails m_encryptionAtRest;
    bool m_encryptionAtRestHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
