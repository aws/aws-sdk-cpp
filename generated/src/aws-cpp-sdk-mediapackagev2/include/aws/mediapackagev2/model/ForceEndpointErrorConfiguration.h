/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackagev2/model/EndpointErrorCondition.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The failover settings for the endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/ForceEndpointErrorConfiguration">AWS
   * API Reference</a></p>
   */
  class ForceEndpointErrorConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API ForceEndpointErrorConfiguration() = default;
    AWS_MEDIAPACKAGEV2_API ForceEndpointErrorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API ForceEndpointErrorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The failover conditions for the endpoint. The options are:</p> <ul> <li> <p>
     * <code>STALE_MANIFEST</code> - The manifest stalled and there are no new segments
     * or parts.</p> </li> <li> <p> <code>INCOMPLETE_MANIFEST</code> - There is a gap
     * in the manifest.</p> </li> <li> <p> <code>MISSING_DRM_KEY</code> - Key rotation
     * is enabled but we're unable to fetch the key for the current key period.</p>
     * </li> <li> <p> <code>SLATE_INPUT</code> - The segments which contain slate
     * content are considered to be missing content.</p> </li> </ul>
     */
    inline const Aws::Vector<EndpointErrorCondition>& GetEndpointErrorConditions() const { return m_endpointErrorConditions; }
    inline bool EndpointErrorConditionsHasBeenSet() const { return m_endpointErrorConditionsHasBeenSet; }
    template<typename EndpointErrorConditionsT = Aws::Vector<EndpointErrorCondition>>
    void SetEndpointErrorConditions(EndpointErrorConditionsT&& value) { m_endpointErrorConditionsHasBeenSet = true; m_endpointErrorConditions = std::forward<EndpointErrorConditionsT>(value); }
    template<typename EndpointErrorConditionsT = Aws::Vector<EndpointErrorCondition>>
    ForceEndpointErrorConfiguration& WithEndpointErrorConditions(EndpointErrorConditionsT&& value) { SetEndpointErrorConditions(std::forward<EndpointErrorConditionsT>(value)); return *this;}
    inline ForceEndpointErrorConfiguration& AddEndpointErrorConditions(EndpointErrorCondition value) { m_endpointErrorConditionsHasBeenSet = true; m_endpointErrorConditions.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<EndpointErrorCondition> m_endpointErrorConditions;
    bool m_endpointErrorConditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
