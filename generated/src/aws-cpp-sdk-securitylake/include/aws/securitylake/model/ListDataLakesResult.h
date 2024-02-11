/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/DataLakeResource.h>
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
namespace SecurityLake
{
namespace Model
{
  class ListDataLakesResult
  {
  public:
    AWS_SECURITYLAKE_API ListDataLakesResult();
    AWS_SECURITYLAKE_API ListDataLakesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API ListDataLakesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Retrieves the Security Lake configuration object.</p>
     */
    inline const Aws::Vector<DataLakeResource>& GetDataLakes() const{ return m_dataLakes; }

    /**
     * <p>Retrieves the Security Lake configuration object.</p>
     */
    inline void SetDataLakes(const Aws::Vector<DataLakeResource>& value) { m_dataLakes = value; }

    /**
     * <p>Retrieves the Security Lake configuration object.</p>
     */
    inline void SetDataLakes(Aws::Vector<DataLakeResource>&& value) { m_dataLakes = std::move(value); }

    /**
     * <p>Retrieves the Security Lake configuration object.</p>
     */
    inline ListDataLakesResult& WithDataLakes(const Aws::Vector<DataLakeResource>& value) { SetDataLakes(value); return *this;}

    /**
     * <p>Retrieves the Security Lake configuration object.</p>
     */
    inline ListDataLakesResult& WithDataLakes(Aws::Vector<DataLakeResource>&& value) { SetDataLakes(std::move(value)); return *this;}

    /**
     * <p>Retrieves the Security Lake configuration object.</p>
     */
    inline ListDataLakesResult& AddDataLakes(const DataLakeResource& value) { m_dataLakes.push_back(value); return *this; }

    /**
     * <p>Retrieves the Security Lake configuration object.</p>
     */
    inline ListDataLakesResult& AddDataLakes(DataLakeResource&& value) { m_dataLakes.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDataLakesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDataLakesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDataLakesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DataLakeResource> m_dataLakes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
