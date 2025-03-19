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
   * <p>Information about the server-side encryption for the table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableSseDescription">AWS
   * API Reference</a></p>
   */
  class AwsDynamoDbTableSseDescription
  {
  public:
    AWS_SECURITYHUB_API AwsDynamoDbTableSseDescription() = default;
    AWS_SECURITYHUB_API AwsDynamoDbTableSseDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableSseDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the key is inaccessible, the date and time when DynamoDB detected that the
     * key was inaccessible.</p> <p>For more information about the validation and
     * formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetInaccessibleEncryptionDateTime() const { return m_inaccessibleEncryptionDateTime; }
    inline bool InaccessibleEncryptionDateTimeHasBeenSet() const { return m_inaccessibleEncryptionDateTimeHasBeenSet; }
    template<typename InaccessibleEncryptionDateTimeT = Aws::String>
    void SetInaccessibleEncryptionDateTime(InaccessibleEncryptionDateTimeT&& value) { m_inaccessibleEncryptionDateTimeHasBeenSet = true; m_inaccessibleEncryptionDateTime = std::forward<InaccessibleEncryptionDateTimeT>(value); }
    template<typename InaccessibleEncryptionDateTimeT = Aws::String>
    AwsDynamoDbTableSseDescription& WithInaccessibleEncryptionDateTime(InaccessibleEncryptionDateTimeT&& value) { SetInaccessibleEncryptionDateTime(std::forward<InaccessibleEncryptionDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the server-side encryption.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsDynamoDbTableSseDescription& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of server-side encryption.</p>
     */
    inline const Aws::String& GetSseType() const { return m_sseType; }
    inline bool SseTypeHasBeenSet() const { return m_sseTypeHasBeenSet; }
    template<typename SseTypeT = Aws::String>
    void SetSseType(SseTypeT&& value) { m_sseTypeHasBeenSet = true; m_sseType = std::forward<SseTypeT>(value); }
    template<typename SseTypeT = Aws::String>
    AwsDynamoDbTableSseDescription& WithSseType(SseTypeT&& value) { SetSseType(std::forward<SseTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key that is used for the KMS encryption.</p>
     */
    inline const Aws::String& GetKmsMasterKeyArn() const { return m_kmsMasterKeyArn; }
    inline bool KmsMasterKeyArnHasBeenSet() const { return m_kmsMasterKeyArnHasBeenSet; }
    template<typename KmsMasterKeyArnT = Aws::String>
    void SetKmsMasterKeyArn(KmsMasterKeyArnT&& value) { m_kmsMasterKeyArnHasBeenSet = true; m_kmsMasterKeyArn = std::forward<KmsMasterKeyArnT>(value); }
    template<typename KmsMasterKeyArnT = Aws::String>
    AwsDynamoDbTableSseDescription& WithKmsMasterKeyArn(KmsMasterKeyArnT&& value) { SetKmsMasterKeyArn(std::forward<KmsMasterKeyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inaccessibleEncryptionDateTime;
    bool m_inaccessibleEncryptionDateTimeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_sseType;
    bool m_sseTypeHasBeenSet = false;

    Aws::String m_kmsMasterKeyArn;
    bool m_kmsMasterKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
