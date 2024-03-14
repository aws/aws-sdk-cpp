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
  class CreateDbParameterGroupResult
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API CreateDbParameterGroupResult();
    AWS_TIMESTREAMINFLUXDB_API CreateDbParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMINFLUXDB_API CreateDbParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateDbParameterGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline CreateDbParameterGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline CreateDbParameterGroupResult& WithId(const char* value) { SetId(value); return *this;}


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
    inline CreateDbParameterGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The customer-supplied name that uniquely identifies the DB parameter group
     * when interacting with the Amazon Timestream for InfluxDB API and CLI
     * commands.</p>
     */
    inline CreateDbParameterGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The customer-supplied name that uniquely identifies the DB parameter group
     * when interacting with the Amazon Timestream for InfluxDB API and CLI
     * commands.</p>
     */
    inline CreateDbParameterGroupResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARM) of the DB parameter group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARM) of the DB parameter group.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARM) of the DB parameter group.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARM) of the DB parameter group.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARM) of the DB parameter group.</p>
     */
    inline CreateDbParameterGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARM) of the DB parameter group.</p>
     */
    inline CreateDbParameterGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARM) of the DB parameter group.</p>
     */
    inline CreateDbParameterGroupResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The description of the DB parameter group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the DB parameter group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the DB parameter group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the DB parameter group.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the DB parameter group.</p>
     */
    inline CreateDbParameterGroupResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the DB parameter group.</p>
     */
    inline CreateDbParameterGroupResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the DB parameter group.</p>
     */
    inline CreateDbParameterGroupResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of the parameters that comprise the DB parameter group.</p>
     */
    inline const Parameters& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of the parameters that comprise the DB parameter group.</p>
     */
    inline void SetParameters(const Parameters& value) { m_parameters = value; }

    /**
     * <p>A list of the parameters that comprise the DB parameter group.</p>
     */
    inline void SetParameters(Parameters&& value) { m_parameters = std::move(value); }

    /**
     * <p>A list of the parameters that comprise the DB parameter group.</p>
     */
    inline CreateDbParameterGroupResult& WithParameters(const Parameters& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of the parameters that comprise the DB parameter group.</p>
     */
    inline CreateDbParameterGroupResult& WithParameters(Parameters&& value) { SetParameters(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateDbParameterGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateDbParameterGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateDbParameterGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
