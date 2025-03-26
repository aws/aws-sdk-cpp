/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/AdsInteractionPublishOptInEventType.h>
#include <aws/mediatailor/model/AdsInteractionExcludeEventType.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Settings for customizing what events are included in logs for interactions
   * with the ad decision server (ADS).</p> <p>For more information about ADS logs,
   * inlcuding descriptions of the event types, see <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ads-log-format.html">MediaTailor
   * ADS logs description and event types</a> in Elemental MediaTailor User
   * Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/AdsInteractionLog">AWS
   * API Reference</a></p>
   */
  class AdsInteractionLog
  {
  public:
    AWS_MEDIATAILOR_API AdsInteractionLog() = default;
    AWS_MEDIATAILOR_API AdsInteractionLog(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API AdsInteractionLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates that MediaTailor emits <code>RAW_ADS_RESPONSE</code> logs for
     * playback sessions that are initialized with this configuration.</p>
     */
    inline const Aws::Vector<AdsInteractionPublishOptInEventType>& GetPublishOptInEventTypes() const { return m_publishOptInEventTypes; }
    inline bool PublishOptInEventTypesHasBeenSet() const { return m_publishOptInEventTypesHasBeenSet; }
    template<typename PublishOptInEventTypesT = Aws::Vector<AdsInteractionPublishOptInEventType>>
    void SetPublishOptInEventTypes(PublishOptInEventTypesT&& value) { m_publishOptInEventTypesHasBeenSet = true; m_publishOptInEventTypes = std::forward<PublishOptInEventTypesT>(value); }
    template<typename PublishOptInEventTypesT = Aws::Vector<AdsInteractionPublishOptInEventType>>
    AdsInteractionLog& WithPublishOptInEventTypes(PublishOptInEventTypesT&& value) { SetPublishOptInEventTypes(std::forward<PublishOptInEventTypesT>(value)); return *this;}
    inline AdsInteractionLog& AddPublishOptInEventTypes(AdsInteractionPublishOptInEventType value) { m_publishOptInEventTypesHasBeenSet = true; m_publishOptInEventTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates that MediaTailor won't emit the selected events in the logs for
     * playback sessions that are initialized with this configuration.</p>
     */
    inline const Aws::Vector<AdsInteractionExcludeEventType>& GetExcludeEventTypes() const { return m_excludeEventTypes; }
    inline bool ExcludeEventTypesHasBeenSet() const { return m_excludeEventTypesHasBeenSet; }
    template<typename ExcludeEventTypesT = Aws::Vector<AdsInteractionExcludeEventType>>
    void SetExcludeEventTypes(ExcludeEventTypesT&& value) { m_excludeEventTypesHasBeenSet = true; m_excludeEventTypes = std::forward<ExcludeEventTypesT>(value); }
    template<typename ExcludeEventTypesT = Aws::Vector<AdsInteractionExcludeEventType>>
    AdsInteractionLog& WithExcludeEventTypes(ExcludeEventTypesT&& value) { SetExcludeEventTypes(std::forward<ExcludeEventTypesT>(value)); return *this;}
    inline AdsInteractionLog& AddExcludeEventTypes(AdsInteractionExcludeEventType value) { m_excludeEventTypesHasBeenSet = true; m_excludeEventTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<AdsInteractionPublishOptInEventType> m_publishOptInEventTypes;
    bool m_publishOptInEventTypesHasBeenSet = false;

    Aws::Vector<AdsInteractionExcludeEventType> m_excludeEventTypes;
    bool m_excludeEventTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
