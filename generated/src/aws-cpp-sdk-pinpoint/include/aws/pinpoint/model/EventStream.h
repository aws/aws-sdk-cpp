/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies settings for publishing event data to an Amazon Kinesis data stream
   * or an Amazon Kinesis Data Firehose delivery stream.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EventStream">AWS
   * API Reference</a></p>
   */
  class EventStream
  {
  public:
    AWS_PINPOINT_API EventStream() = default;
    AWS_PINPOINT_API EventStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EventStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the application to publish event data for.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    EventStream& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis data stream or Amazon
     * Kinesis Data Firehose delivery stream to publish event data to.</p> <p>For a
     * Kinesis data stream, the ARN format is:
     * arn:aws:kinesis:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:stream/<replaceable>stream_name</replaceable>

     * </p> <p>For a Kinesis Data Firehose delivery stream, the ARN format is:
     * arn:aws:firehose:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:deliverystream/<replaceable>stream_name</replaceable>

     *               </p>
     */
    inline const Aws::String& GetDestinationStreamArn() const { return m_destinationStreamArn; }
    inline bool DestinationStreamArnHasBeenSet() const { return m_destinationStreamArnHasBeenSet; }
    template<typename DestinationStreamArnT = Aws::String>
    void SetDestinationStreamArn(DestinationStreamArnT&& value) { m_destinationStreamArnHasBeenSet = true; m_destinationStreamArn = std::forward<DestinationStreamArnT>(value); }
    template<typename DestinationStreamArnT = Aws::String>
    EventStream& WithDestinationStreamArn(DestinationStreamArnT&& value) { SetDestinationStreamArn(std::forward<DestinationStreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when publishing event data, but we removed this requirement. We don't
     * recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    EventStream& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in ISO 8601 format, when the event stream was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::String>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::String>
    EventStream& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM user who last modified the event stream.</p>
     */
    inline const Aws::String& GetLastUpdatedBy() const { return m_lastUpdatedBy; }
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
    template<typename LastUpdatedByT = Aws::String>
    void SetLastUpdatedBy(LastUpdatedByT&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::forward<LastUpdatedByT>(value); }
    template<typename LastUpdatedByT = Aws::String>
    EventStream& WithLastUpdatedBy(LastUpdatedByT&& value) { SetLastUpdatedBy(std::forward<LastUpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Identity and Access Management (IAM) role that authorizes Amazon
     * Pinpoint to publish event data to the stream in your AWS account.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    EventStream& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_destinationStreamArn;
    bool m_destinationStreamArnHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_lastUpdatedBy;
    bool m_lastUpdatedByHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
