/**
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
   * and output data processing flow, and HTTP request information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/InspectionDataRequest">AWS
   * API Reference</a></p>
   */
  class InspectionDataRequest
  {
  public:
    AWS_SFN_API InspectionDataRequest() = default;
    AWS_SFN_API InspectionDataRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API InspectionDataRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The protocol used to make the HTTP request.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    InspectionDataRequest& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP method used for the HTTP request.</p>
     */
    inline const Aws::String& GetMethod() const { return m_method; }
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
    template<typename MethodT = Aws::String>
    void SetMethod(MethodT&& value) { m_methodHasBeenSet = true; m_method = std::forward<MethodT>(value); }
    template<typename MethodT = Aws::String>
    InspectionDataRequest& WithMethod(MethodT&& value) { SetMethod(std::forward<MethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API endpoint used for the HTTP request.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    InspectionDataRequest& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request headers associated with the HTTP request.</p>
     */
    inline const Aws::String& GetHeaders() const { return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    template<typename HeadersT = Aws::String>
    void SetHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers = std::forward<HeadersT>(value); }
    template<typename HeadersT = Aws::String>
    InspectionDataRequest& WithHeaders(HeadersT&& value) { SetHeaders(std::forward<HeadersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request body for the HTTP request.</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    InspectionDataRequest& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_method;
    bool m_methodHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_headers;
    bool m_headersHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
