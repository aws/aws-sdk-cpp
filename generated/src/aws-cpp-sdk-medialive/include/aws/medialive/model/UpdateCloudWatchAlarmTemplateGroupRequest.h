/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for
   * UpdateCloudWatchAlarmTemplateGroupRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateCloudWatchAlarmTemplateGroupRequest">AWS
   * API Reference</a></p>
   */
  class UpdateCloudWatchAlarmTemplateGroupRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateCloudWatchAlarmTemplateGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCloudWatchAlarmTemplateGroup"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    /**
     * A resource's optional description.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A resource's optional description.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A resource's optional description.
     */
    inline UpdateCloudWatchAlarmTemplateGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A resource's optional description.
     */
    inline UpdateCloudWatchAlarmTemplateGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A resource's optional description.
     */
    inline UpdateCloudWatchAlarmTemplateGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline UpdateCloudWatchAlarmTemplateGroupRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline UpdateCloudWatchAlarmTemplateGroupRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline UpdateCloudWatchAlarmTemplateGroupRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
