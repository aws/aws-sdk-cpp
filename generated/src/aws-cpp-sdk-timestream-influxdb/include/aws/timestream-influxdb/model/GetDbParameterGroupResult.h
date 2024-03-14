/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/Parameters.h>
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
namespace TimestreamInfluxDB
{
namespace Model
{
  class GetDbParameterGroupResult
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API GetDbParameterGroupResult();
    AWS_TIMESTREAMINFLUXDB_API GetDbParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMINFLUXDB_API GetDbParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline GetDbParameterGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline GetDbParameterGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline GetDbParameterGroupResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The customer-supplied name that uniquely identifies the DB parameter group
     * when interacting with the Amazon Timestream for InfluxDB API and CLI
     * commands.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The customer-supplied name that uniquely identifies the DB parameter group
     * when interacting with the Amazon Timestream for InfluxDB API and CLI
     * commands.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The customer-supplied name that uniquely identifies the DB parameter group
     * when interacting with the Amazon Timestream for InfluxDB API and CLI
     * commands.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The customer-supplied name that uniquely identifies the DB parameter group
     * when interacting with the Amazon Timestream for InfluxDB API and CLI
     * commands.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The customer-supplied name that uniquely identifies the DB parameter group
     * when interacting with the Amazon Timestream for InfluxDB API and CLI
     * commands.</p>
     */
    inline GetDbParameterGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The customer-supplied name that uniquely identifies the DB parameter group
     * when interacting with the Amazon Timestream for InfluxDB API and CLI
     * commands.</p>
     */
    inline GetDbParameterGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The customer-supplied name that uniquely identifies the DB parameter group
     * when interacting with the Amazon Timestream for InfluxDB API and CLI
     * commands.</p>
     */
    inline GetDbParameterGroupResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the DB parameter group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB parameter group.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB parameter group.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB parameter group.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB parameter group.</p>
     */
    inline GetDbParameterGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DB parameter group.</p>
     */
    inline GetDbParameterGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DB parameter group.</p>
     */
    inline GetDbParameterGroupResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A description of the DB parameter group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the DB parameter group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the DB parameter group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the DB parameter group.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the DB parameter group.</p>
     */
    inline GetDbParameterGroupResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the DB parameter group.</p>
     */
    inline GetDbParameterGroupResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the DB parameter group.</p>
     */
    inline GetDbParameterGroupResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The parameters that comprise the DB parameter group.</p>
     */
    inline const Parameters& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters that comprise the DB parameter group.</p>
     */
    inline void SetParameters(const Parameters& value) { m_parameters = value; }

    /**
     * <p>The parameters that comprise the DB parameter group.</p>
     */
    inline void SetParameters(Parameters&& value) { m_parameters = std::move(value); }

    /**
     * <p>The parameters that comprise the DB parameter group.</p>
     */
    inline GetDbParameterGroupResult& WithParameters(const Parameters& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters that comprise the DB parameter group.</p>
     */
    inline GetDbParameterGroupResult& WithParameters(Parameters&& value) { SetParameters(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDbParameterGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDbParameterGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDbParameterGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_arn;

    Aws::String m_description;

    Parameters m_parameters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
