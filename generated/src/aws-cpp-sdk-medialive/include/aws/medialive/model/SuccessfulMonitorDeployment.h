/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/SignalMapMonitorDeploymentStatus.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Represents the latest successful monitor deployment of a signal map.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SuccessfulMonitorDeployment">AWS
   * API Reference</a></p>
   */
  class SuccessfulMonitorDeployment
  {
  public:
    AWS_MEDIALIVE_API SuccessfulMonitorDeployment() = default;
    AWS_MEDIALIVE_API SuccessfulMonitorDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API SuccessfulMonitorDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * URI associated with a signal map's monitor deployment.
     */
    inline const Aws::String& GetDetailsUri() const { return m_detailsUri; }
    inline bool DetailsUriHasBeenSet() const { return m_detailsUriHasBeenSet; }
    template<typename DetailsUriT = Aws::String>
    void SetDetailsUri(DetailsUriT&& value) { m_detailsUriHasBeenSet = true; m_detailsUri = std::forward<DetailsUriT>(value); }
    template<typename DetailsUriT = Aws::String>
    SuccessfulMonitorDeployment& WithDetailsUri(DetailsUriT&& value) { SetDetailsUri(std::forward<DetailsUriT>(value)); return *this;}
    ///@}

    ///@{
    
    inline SignalMapMonitorDeploymentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SignalMapMonitorDeploymentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SuccessfulMonitorDeployment& WithStatus(SignalMapMonitorDeploymentStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_detailsUri;
    bool m_detailsUriHasBeenSet = false;

    SignalMapMonitorDeploymentStatus m_status{SignalMapMonitorDeploymentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
