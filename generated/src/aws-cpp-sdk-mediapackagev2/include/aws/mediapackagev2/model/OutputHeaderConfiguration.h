/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>

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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The settings for what common media server data (CMSD) headers AWS Elemental
   * MediaPackage includes in responses to the CDN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/OutputHeaderConfiguration">AWS
   * API Reference</a></p>
   */
  class OutputHeaderConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API OutputHeaderConfiguration() = default;
    AWS_MEDIAPACKAGEV2_API OutputHeaderConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API OutputHeaderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When true, AWS Elemental MediaPackage includes the MQCS in responses to the
     * CDN. This setting is valid only when <code>InputType</code> is
     * <code>CMAF</code>.</p>
     */
    inline bool GetPublishMQCS() const { return m_publishMQCS; }
    inline bool PublishMQCSHasBeenSet() const { return m_publishMQCSHasBeenSet; }
    inline void SetPublishMQCS(bool value) { m_publishMQCSHasBeenSet = true; m_publishMQCS = value; }
    inline OutputHeaderConfiguration& WithPublishMQCS(bool value) { SetPublishMQCS(value); return *this;}
    ///@}
  private:

    bool m_publishMQCS{false};
    bool m_publishMQCSHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
