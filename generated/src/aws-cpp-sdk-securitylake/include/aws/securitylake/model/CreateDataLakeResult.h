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
  class CreateDataLakeResult
  {
  public:
    AWS_SECURITYLAKE_API CreateDataLakeResult();
    AWS_SECURITYLAKE_API CreateDataLakeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API CreateDataLakeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The created Security Lake configuration object.</p>
     */
    inline const Aws::Vector<DataLakeResource>& GetDataLakes() const{ return m_dataLakes; }

    /**
     * <p>The created Security Lake configuration object.</p>
     */
    inline void SetDataLakes(const Aws::Vector<DataLakeResource>& value) { m_dataLakes = value; }

    /**
     * <p>The created Security Lake configuration object.</p>
     */
    inline void SetDataLakes(Aws::Vector<DataLakeResource>&& value) { m_dataLakes = std::move(value); }

    /**
     * <p>The created Security Lake configuration object.</p>
     */
    inline CreateDataLakeResult& WithDataLakes(const Aws::Vector<DataLakeResource>& value) { SetDataLakes(value); return *this;}

    /**
     * <p>The created Security Lake configuration object.</p>
     */
    inline CreateDataLakeResult& WithDataLakes(Aws::Vector<DataLakeResource>&& value) { SetDataLakes(std::move(value)); return *this;}

    /**
     * <p>The created Security Lake configuration object.</p>
     */
    inline CreateDataLakeResult& AddDataLakes(const DataLakeResource& value) { m_dataLakes.push_back(value); return *this; }

    /**
     * <p>The created Security Lake configuration object.</p>
     */
    inline CreateDataLakeResult& AddDataLakes(DataLakeResource&& value) { m_dataLakes.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateDataLakeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateDataLakeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateDataLakeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DataLakeResource> m_dataLakes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
