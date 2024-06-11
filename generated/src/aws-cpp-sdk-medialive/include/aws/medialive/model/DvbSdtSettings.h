/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/DvbSdtOutputSdt.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * DVB Service Description Table (SDT)<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DvbSdtSettings">AWS
   * API Reference</a></p>
   */
  class DvbSdtSettings
  {
  public:
    AWS_MEDIALIVE_API DvbSdtSettings();
    AWS_MEDIALIVE_API DvbSdtSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API DvbSdtSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Selects method of inserting SDT information into output stream. The sdtFollow
     * setting copies SDT information from input stream to output stream. The
     * sdtFollowIfPresent setting copies SDT information from input stream to output
     * stream if SDT information is present in the input, otherwise it will fall back
     * on the user-defined values. The sdtManual setting means user will enter the SDT
     * information. The sdtNone setting means output stream will not contain SDT
     * information.
     */
    inline const DvbSdtOutputSdt& GetOutputSdt() const{ return m_outputSdt; }
    inline bool OutputSdtHasBeenSet() const { return m_outputSdtHasBeenSet; }
    inline void SetOutputSdt(const DvbSdtOutputSdt& value) { m_outputSdtHasBeenSet = true; m_outputSdt = value; }
    inline void SetOutputSdt(DvbSdtOutputSdt&& value) { m_outputSdtHasBeenSet = true; m_outputSdt = std::move(value); }
    inline DvbSdtSettings& WithOutputSdt(const DvbSdtOutputSdt& value) { SetOutputSdt(value); return *this;}
    inline DvbSdtSettings& WithOutputSdt(DvbSdtOutputSdt&& value) { SetOutputSdt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetRepInterval() const{ return m_repInterval; }
    inline bool RepIntervalHasBeenSet() const { return m_repIntervalHasBeenSet; }
    inline void SetRepInterval(int value) { m_repIntervalHasBeenSet = true; m_repInterval = value; }
    inline DvbSdtSettings& WithRepInterval(int value) { SetRepInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * The service name placed in the serviceDescriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline DvbSdtSettings& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline DvbSdtSettings& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline DvbSdtSettings& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * The service provider name placed in the serviceDescriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline const Aws::String& GetServiceProviderName() const{ return m_serviceProviderName; }
    inline bool ServiceProviderNameHasBeenSet() const { return m_serviceProviderNameHasBeenSet; }
    inline void SetServiceProviderName(const Aws::String& value) { m_serviceProviderNameHasBeenSet = true; m_serviceProviderName = value; }
    inline void SetServiceProviderName(Aws::String&& value) { m_serviceProviderNameHasBeenSet = true; m_serviceProviderName = std::move(value); }
    inline void SetServiceProviderName(const char* value) { m_serviceProviderNameHasBeenSet = true; m_serviceProviderName.assign(value); }
    inline DvbSdtSettings& WithServiceProviderName(const Aws::String& value) { SetServiceProviderName(value); return *this;}
    inline DvbSdtSettings& WithServiceProviderName(Aws::String&& value) { SetServiceProviderName(std::move(value)); return *this;}
    inline DvbSdtSettings& WithServiceProviderName(const char* value) { SetServiceProviderName(value); return *this;}
    ///@}
  private:

    DvbSdtOutputSdt m_outputSdt;
    bool m_outputSdtHasBeenSet = false;

    int m_repInterval;
    bool m_repIntervalHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_serviceProviderName;
    bool m_serviceProviderNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
