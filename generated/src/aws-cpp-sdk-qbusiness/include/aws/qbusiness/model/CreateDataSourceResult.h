/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QBusiness
{
namespace Model
{
  class CreateDataSourceResult
  {
  public:
    AWS_QBUSINESS_API CreateDataSourceResult();
    AWS_QBUSINESS_API CreateDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API CreateDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The Amazon Resource Name (ARN) of a data source in an Amazon Q application.
     * </p>
     */
    inline const Aws::String& GetDataSourceArn() const{ return m_dataSourceArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of a data source in an Amazon Q application.
     * </p>
     */
    inline void SetDataSourceArn(const Aws::String& value) { m_dataSourceArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of a data source in an Amazon Q application.
     * </p>
     */
    inline void SetDataSourceArn(Aws::String&& value) { m_dataSourceArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a data source in an Amazon Q application.
     * </p>
     */
    inline void SetDataSourceArn(const char* value) { m_dataSourceArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a data source in an Amazon Q application.
     * </p>
     */
    inline CreateDataSourceResult& WithDataSourceArn(const Aws::String& value) { SetDataSourceArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a data source in an Amazon Q application.
     * </p>
     */
    inline CreateDataSourceResult& WithDataSourceArn(Aws::String&& value) { SetDataSourceArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a data source in an Amazon Q application.
     * </p>
     */
    inline CreateDataSourceResult& WithDataSourceArn(const char* value) { SetDataSourceArn(value); return *this;}


    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceId = value; }

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceId = std::move(value); }

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceId.assign(value); }

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline CreateDataSourceResult& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline CreateDataSourceResult& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline CreateDataSourceResult& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateDataSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateDataSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateDataSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_dataSourceArn;

    Aws::String m_dataSourceId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
