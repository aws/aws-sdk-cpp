/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/Layer.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeLayers</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeLayersResult">AWS
   * API Reference</a></p>
   */
  class DescribeLayersResult
  {
  public:
    AWS_OPSWORKS_API DescribeLayersResult() = default;
    AWS_OPSWORKS_API DescribeLayersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeLayersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>Layer</code> objects that describe the layers.</p>
     */
    inline const Aws::Vector<Layer>& GetLayers() const { return m_layers; }
    template<typename LayersT = Aws::Vector<Layer>>
    void SetLayers(LayersT&& value) { m_layersHasBeenSet = true; m_layers = std::forward<LayersT>(value); }
    template<typename LayersT = Aws::Vector<Layer>>
    DescribeLayersResult& WithLayers(LayersT&& value) { SetLayers(std::forward<LayersT>(value)); return *this;}
    template<typename LayersT = Layer>
    DescribeLayersResult& AddLayers(LayersT&& value) { m_layersHasBeenSet = true; m_layers.emplace_back(std::forward<LayersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLayersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Layer> m_layers;
    bool m_layersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
