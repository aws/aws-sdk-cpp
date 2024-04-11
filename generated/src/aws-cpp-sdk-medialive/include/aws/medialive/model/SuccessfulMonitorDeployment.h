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
    AWS_MEDIALIVE_API SuccessfulMonitorDeployment();
    AWS_MEDIALIVE_API SuccessfulMonitorDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API SuccessfulMonitorDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * URI associated with a signal map's monitor deployment.
     */
    inline const Aws::String& GetDetailsUri() const{ return m_detailsUri; }

    /**
     * URI associated with a signal map's monitor deployment.
     */
    inline bool DetailsUriHasBeenSet() const { return m_detailsUriHasBeenSet; }

    /**
     * URI associated with a signal map's monitor deployment.
     */
    inline void SetDetailsUri(const Aws::String& value) { m_detailsUriHasBeenSet = true; m_detailsUri = value; }

    /**
     * URI associated with a signal map's monitor deployment.
     */
    inline void SetDetailsUri(Aws::String&& value) { m_detailsUriHasBeenSet = true; m_detailsUri = std::move(value); }

    /**
     * URI associated with a signal map's monitor deployment.
     */
    inline void SetDetailsUri(const char* value) { m_detailsUriHasBeenSet = true; m_detailsUri.assign(value); }

    /**
     * URI associated with a signal map's monitor deployment.
     */
    inline SuccessfulMonitorDeployment& WithDetailsUri(const Aws::String& value) { SetDetailsUri(value); return *this;}

    /**
     * URI associated with a signal map's monitor deployment.
     */
    inline SuccessfulMonitorDeployment& WithDetailsUri(Aws::String&& value) { SetDetailsUri(std::move(value)); return *this;}

    /**
     * URI associated with a signal map's monitor deployment.
     */
    inline SuccessfulMonitorDeployment& WithDetailsUri(const char* value) { SetDetailsUri(value); return *this;}


    
    inline const SignalMapMonitorDeploymentStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const SignalMapMonitorDeploymentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(SignalMapMonitorDeploymentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline SuccessfulMonitorDeployment& WithStatus(const SignalMapMonitorDeploymentStatus& value) { SetStatus(value); return *this;}

    
    inline SuccessfulMonitorDeployment& WithStatus(SignalMapMonitorDeploymentStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_detailsUri;
    bool m_detailsUriHasBeenSet = false;

    SignalMapMonitorDeploymentStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
