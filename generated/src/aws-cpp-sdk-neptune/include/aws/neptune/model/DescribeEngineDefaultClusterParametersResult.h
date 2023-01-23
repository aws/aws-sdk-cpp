/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/model/EngineDefaults.h>
#include <aws/neptune/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Neptune
{
namespace Model
{
  class DescribeEngineDefaultClusterParametersResult
  {
  public:
    AWS_NEPTUNE_API DescribeEngineDefaultClusterParametersResult();
    AWS_NEPTUNE_API DescribeEngineDefaultClusterParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API DescribeEngineDefaultClusterParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const EngineDefaults& GetEngineDefaults() const{ return m_engineDefaults; }

    
    inline void SetEngineDefaults(const EngineDefaults& value) { m_engineDefaults = value; }

    
    inline void SetEngineDefaults(EngineDefaults&& value) { m_engineDefaults = std::move(value); }

    
    inline DescribeEngineDefaultClusterParametersResult& WithEngineDefaults(const EngineDefaults& value) { SetEngineDefaults(value); return *this;}

    
    inline DescribeEngineDefaultClusterParametersResult& WithEngineDefaults(EngineDefaults&& value) { SetEngineDefaults(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeEngineDefaultClusterParametersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeEngineDefaultClusterParametersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    EngineDefaults m_engineDefaults;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
