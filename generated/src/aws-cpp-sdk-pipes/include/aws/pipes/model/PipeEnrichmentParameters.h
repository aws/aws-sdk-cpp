/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/PipeEnrichmentHttpParameters.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters required to set up enrichment on your pipe.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeEnrichmentParameters">AWS
   * API Reference</a></p>
   */
  class PipeEnrichmentParameters
  {
  public:
    AWS_PIPES_API PipeEnrichmentParameters();
    AWS_PIPES_API PipeEnrichmentParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeEnrichmentParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains the HTTP parameters to use when the target is a API Gateway REST
     * endpoint or EventBridge ApiDestination.</p> <p>If you specify an API Gateway
     * REST API or EventBridge ApiDestination as a target, you can use this parameter
     * to specify headers, path parameters, and query string keys/values as part of
     * your target invoking request. If you're using ApiDestinations, the corresponding
     * Connection can also have these values configured. In case of any conflicting
     * keys, values from the Connection take precedence.</p>
     */
    inline const PipeEnrichmentHttpParameters& GetHttpParameters() const{ return m_httpParameters; }

    /**
     * <p>Contains the HTTP parameters to use when the target is a API Gateway REST
     * endpoint or EventBridge ApiDestination.</p> <p>If you specify an API Gateway
     * REST API or EventBridge ApiDestination as a target, you can use this parameter
     * to specify headers, path parameters, and query string keys/values as part of
     * your target invoking request. If you're using ApiDestinations, the corresponding
     * Connection can also have these values configured. In case of any conflicting
     * keys, values from the Connection take precedence.</p>
     */
    inline bool HttpParametersHasBeenSet() const { return m_httpParametersHasBeenSet; }

    /**
     * <p>Contains the HTTP parameters to use when the target is a API Gateway REST
     * endpoint or EventBridge ApiDestination.</p> <p>If you specify an API Gateway
     * REST API or EventBridge ApiDestination as a target, you can use this parameter
     * to specify headers, path parameters, and query string keys/values as part of
     * your target invoking request. If you're using ApiDestinations, the corresponding
     * Connection can also have these values configured. In case of any conflicting
     * keys, values from the Connection take precedence.</p>
     */
    inline void SetHttpParameters(const PipeEnrichmentHttpParameters& value) { m_httpParametersHasBeenSet = true; m_httpParameters = value; }

    /**
     * <p>Contains the HTTP parameters to use when the target is a API Gateway REST
     * endpoint or EventBridge ApiDestination.</p> <p>If you specify an API Gateway
     * REST API or EventBridge ApiDestination as a target, you can use this parameter
     * to specify headers, path parameters, and query string keys/values as part of
     * your target invoking request. If you're using ApiDestinations, the corresponding
     * Connection can also have these values configured. In case of any conflicting
     * keys, values from the Connection take precedence.</p>
     */
    inline void SetHttpParameters(PipeEnrichmentHttpParameters&& value) { m_httpParametersHasBeenSet = true; m_httpParameters = std::move(value); }

    /**
     * <p>Contains the HTTP parameters to use when the target is a API Gateway REST
     * endpoint or EventBridge ApiDestination.</p> <p>If you specify an API Gateway
     * REST API or EventBridge ApiDestination as a target, you can use this parameter
     * to specify headers, path parameters, and query string keys/values as part of
     * your target invoking request. If you're using ApiDestinations, the corresponding
     * Connection can also have these values configured. In case of any conflicting
     * keys, values from the Connection take precedence.</p>
     */
    inline PipeEnrichmentParameters& WithHttpParameters(const PipeEnrichmentHttpParameters& value) { SetHttpParameters(value); return *this;}

    /**
     * <p>Contains the HTTP parameters to use when the target is a API Gateway REST
     * endpoint or EventBridge ApiDestination.</p> <p>If you specify an API Gateway
     * REST API or EventBridge ApiDestination as a target, you can use this parameter
     * to specify headers, path parameters, and query string keys/values as part of
     * your target invoking request. If you're using ApiDestinations, the corresponding
     * Connection can also have these values configured. In case of any conflicting
     * keys, values from the Connection take precedence.</p>
     */
    inline PipeEnrichmentParameters& WithHttpParameters(PipeEnrichmentHttpParameters&& value) { SetHttpParameters(std::move(value)); return *this;}


    /**
     * <p>Valid JSON text passed to the enrichment. In this case, nothing from the
     * event itself is passed to the enrichment. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline const Aws::String& GetInputTemplate() const{ return m_inputTemplate; }

    /**
     * <p>Valid JSON text passed to the enrichment. In this case, nothing from the
     * event itself is passed to the enrichment. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline bool InputTemplateHasBeenSet() const { return m_inputTemplateHasBeenSet; }

    /**
     * <p>Valid JSON text passed to the enrichment. In this case, nothing from the
     * event itself is passed to the enrichment. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline void SetInputTemplate(const Aws::String& value) { m_inputTemplateHasBeenSet = true; m_inputTemplate = value; }

    /**
     * <p>Valid JSON text passed to the enrichment. In this case, nothing from the
     * event itself is passed to the enrichment. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline void SetInputTemplate(Aws::String&& value) { m_inputTemplateHasBeenSet = true; m_inputTemplate = std::move(value); }

    /**
     * <p>Valid JSON text passed to the enrichment. In this case, nothing from the
     * event itself is passed to the enrichment. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline void SetInputTemplate(const char* value) { m_inputTemplateHasBeenSet = true; m_inputTemplate.assign(value); }

    /**
     * <p>Valid JSON text passed to the enrichment. In this case, nothing from the
     * event itself is passed to the enrichment. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline PipeEnrichmentParameters& WithInputTemplate(const Aws::String& value) { SetInputTemplate(value); return *this;}

    /**
     * <p>Valid JSON text passed to the enrichment. In this case, nothing from the
     * event itself is passed to the enrichment. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline PipeEnrichmentParameters& WithInputTemplate(Aws::String&& value) { SetInputTemplate(std::move(value)); return *this;}

    /**
     * <p>Valid JSON text passed to the enrichment. In this case, nothing from the
     * event itself is passed to the enrichment. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline PipeEnrichmentParameters& WithInputTemplate(const char* value) { SetInputTemplate(value); return *this;}

  private:

    PipeEnrichmentHttpParameters m_httpParameters;
    bool m_httpParametersHasBeenSet = false;

    Aws::String m_inputTemplate;
    bool m_inputTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
