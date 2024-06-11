﻿/**
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
    AWS_OPSWORKS_API DescribeLayersResult();
    AWS_OPSWORKS_API DescribeLayersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeLayersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>Layer</code> objects that describe the layers.</p>
     */
    inline const Aws::Vector<Layer>& GetLayers() const{ return m_layers; }
    inline void SetLayers(const Aws::Vector<Layer>& value) { m_layers = value; }
    inline void SetLayers(Aws::Vector<Layer>&& value) { m_layers = std::move(value); }
    inline DescribeLayersResult& WithLayers(const Aws::Vector<Layer>& value) { SetLayers(value); return *this;}
    inline DescribeLayersResult& WithLayers(Aws::Vector<Layer>&& value) { SetLayers(std::move(value)); return *this;}
    inline DescribeLayersResult& AddLayers(const Layer& value) { m_layers.push_back(value); return *this; }
    inline DescribeLayersResult& AddLayers(Layer&& value) { m_layers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeLayersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeLayersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeLayersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Layer> m_layers;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
