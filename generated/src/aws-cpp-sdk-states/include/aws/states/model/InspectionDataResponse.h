﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains additional details about the state's execution, including its input
   * and output data processing flow, and HTTP response information. The
   * <code>inspectionLevel</code> request parameter specifies which details are
   * returned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/InspectionDataResponse">AWS
   * API Reference</a></p>
   */
  class InspectionDataResponse
  {
  public:
    AWS_SFN_API InspectionDataResponse();
    AWS_SFN_API InspectionDataResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API InspectionDataResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The protocol used to return the HTTP response.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }
    inline InspectionDataResponse& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}
    inline InspectionDataResponse& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}
    inline InspectionDataResponse& WithProtocol(const char* value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP response status code for the HTTP response.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }
    inline InspectionDataResponse& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}
    inline InspectionDataResponse& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}
    inline InspectionDataResponse& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message associated with the HTTP status code.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline InspectionDataResponse& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline InspectionDataResponse& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline InspectionDataResponse& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response headers associated with the HTTP response.</p>
     */
    inline const Aws::String& GetHeaders() const{ return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    inline void SetHeaders(const Aws::String& value) { m_headersHasBeenSet = true; m_headers = value; }
    inline void SetHeaders(Aws::String&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }
    inline void SetHeaders(const char* value) { m_headersHasBeenSet = true; m_headers.assign(value); }
    inline InspectionDataResponse& WithHeaders(const Aws::String& value) { SetHeaders(value); return *this;}
    inline InspectionDataResponse& WithHeaders(Aws::String&& value) { SetHeaders(std::move(value)); return *this;}
    inline InspectionDataResponse& WithHeaders(const char* value) { SetHeaders(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP response returned.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }
    inline InspectionDataResponse& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline InspectionDataResponse& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline InspectionDataResponse& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}
  private:

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_headers;
    bool m_headersHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
