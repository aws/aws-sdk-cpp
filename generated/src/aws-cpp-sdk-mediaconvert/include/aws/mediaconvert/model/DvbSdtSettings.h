/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/OutputSdt.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Use these settings to insert a DVB Service Description Table (SDT) in the
   * transport stream of this output. When you work directly in your JSON job
   * specification, include this object only when your job has a transport stream
   * output and the container settings contain the object M2tsSettings.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DvbSdtSettings">AWS
   * API Reference</a></p>
   */
  class DvbSdtSettings
  {
  public:
    AWS_MEDIACONVERT_API DvbSdtSettings();
    AWS_MEDIACONVERT_API DvbSdtSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API DvbSdtSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Selects method of inserting SDT information into output stream.  "Follow input
     * SDT" copies SDT information from input stream to  output stream. "Follow input
     * SDT if present" copies SDT information from  input stream to output stream if
     * SDT information is present in the input, otherwise it will fall back on the
     * user-defined values. Enter "SDT  Manually" means user will enter the SDT
     * information. "No SDT" means output  stream will not contain SDT information.
     */
    inline const OutputSdt& GetOutputSdt() const{ return m_outputSdt; }

    /**
     * Selects method of inserting SDT information into output stream.  "Follow input
     * SDT" copies SDT information from input stream to  output stream. "Follow input
     * SDT if present" copies SDT information from  input stream to output stream if
     * SDT information is present in the input, otherwise it will fall back on the
     * user-defined values. Enter "SDT  Manually" means user will enter the SDT
     * information. "No SDT" means output  stream will not contain SDT information.
     */
    inline bool OutputSdtHasBeenSet() const { return m_outputSdtHasBeenSet; }

    /**
     * Selects method of inserting SDT information into output stream.  "Follow input
     * SDT" copies SDT information from input stream to  output stream. "Follow input
     * SDT if present" copies SDT information from  input stream to output stream if
     * SDT information is present in the input, otherwise it will fall back on the
     * user-defined values. Enter "SDT  Manually" means user will enter the SDT
     * information. "No SDT" means output  stream will not contain SDT information.
     */
    inline void SetOutputSdt(const OutputSdt& value) { m_outputSdtHasBeenSet = true; m_outputSdt = value; }

    /**
     * Selects method of inserting SDT information into output stream.  "Follow input
     * SDT" copies SDT information from input stream to  output stream. "Follow input
     * SDT if present" copies SDT information from  input stream to output stream if
     * SDT information is present in the input, otherwise it will fall back on the
     * user-defined values. Enter "SDT  Manually" means user will enter the SDT
     * information. "No SDT" means output  stream will not contain SDT information.
     */
    inline void SetOutputSdt(OutputSdt&& value) { m_outputSdtHasBeenSet = true; m_outputSdt = std::move(value); }

    /**
     * Selects method of inserting SDT information into output stream.  "Follow input
     * SDT" copies SDT information from input stream to  output stream. "Follow input
     * SDT if present" copies SDT information from  input stream to output stream if
     * SDT information is present in the input, otherwise it will fall back on the
     * user-defined values. Enter "SDT  Manually" means user will enter the SDT
     * information. "No SDT" means output  stream will not contain SDT information.
     */
    inline DvbSdtSettings& WithOutputSdt(const OutputSdt& value) { SetOutputSdt(value); return *this;}

    /**
     * Selects method of inserting SDT information into output stream.  "Follow input
     * SDT" copies SDT information from input stream to  output stream. "Follow input
     * SDT if present" copies SDT information from  input stream to output stream if
     * SDT information is present in the input, otherwise it will fall back on the
     * user-defined values. Enter "SDT  Manually" means user will enter the SDT
     * information. "No SDT" means output  stream will not contain SDT information.
     */
    inline DvbSdtSettings& WithOutputSdt(OutputSdt&& value) { SetOutputSdt(std::move(value)); return *this;}


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetSdtInterval() const{ return m_sdtInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline bool SdtIntervalHasBeenSet() const { return m_sdtIntervalHasBeenSet; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline void SetSdtInterval(int value) { m_sdtIntervalHasBeenSet = true; m_sdtInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline DvbSdtSettings& WithSdtInterval(int value) { SetSdtInterval(value); return *this;}


    /**
     * The service name placed in the service_descriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * The service name placed in the service_descriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * The service name placed in the service_descriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * The service name placed in the service_descriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * The service name placed in the service_descriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * The service name placed in the service_descriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline DvbSdtSettings& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * The service name placed in the service_descriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline DvbSdtSettings& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * The service name placed in the service_descriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline DvbSdtSettings& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * The service provider name placed in the service_descriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline const Aws::String& GetServiceProviderName() const{ return m_serviceProviderName; }

    /**
     * The service provider name placed in the service_descriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline bool ServiceProviderNameHasBeenSet() const { return m_serviceProviderNameHasBeenSet; }

    /**
     * The service provider name placed in the service_descriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline void SetServiceProviderName(const Aws::String& value) { m_serviceProviderNameHasBeenSet = true; m_serviceProviderName = value; }

    /**
     * The service provider name placed in the service_descriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline void SetServiceProviderName(Aws::String&& value) { m_serviceProviderNameHasBeenSet = true; m_serviceProviderName = std::move(value); }

    /**
     * The service provider name placed in the service_descriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline void SetServiceProviderName(const char* value) { m_serviceProviderNameHasBeenSet = true; m_serviceProviderName.assign(value); }

    /**
     * The service provider name placed in the service_descriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline DvbSdtSettings& WithServiceProviderName(const Aws::String& value) { SetServiceProviderName(value); return *this;}

    /**
     * The service provider name placed in the service_descriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline DvbSdtSettings& WithServiceProviderName(Aws::String&& value) { SetServiceProviderName(std::move(value)); return *this;}

    /**
     * The service provider name placed in the service_descriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline DvbSdtSettings& WithServiceProviderName(const char* value) { SetServiceProviderName(value); return *this;}

  private:

    OutputSdt m_outputSdt;
    bool m_outputSdtHasBeenSet = false;

    int m_sdtInterval;
    bool m_sdtIntervalHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_serviceProviderName;
    bool m_serviceProviderNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
