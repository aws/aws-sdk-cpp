/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/states/model/RoutingConfigurationListItem.h>
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
namespace SFN
{
namespace Model
{
  class DescribeStateMachineAliasResult
  {
  public:
    AWS_SFN_API DescribeStateMachineAliasResult();
    AWS_SFN_API DescribeStateMachineAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API DescribeStateMachineAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias.</p>
     */
    inline const Aws::String& GetStateMachineAliasArn() const{ return m_stateMachineAliasArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias.</p>
     */
    inline void SetStateMachineAliasArn(const Aws::String& value) { m_stateMachineAliasArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias.</p>
     */
    inline void SetStateMachineAliasArn(Aws::String&& value) { m_stateMachineAliasArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias.</p>
     */
    inline void SetStateMachineAliasArn(const char* value) { m_stateMachineAliasArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias.</p>
     */
    inline DescribeStateMachineAliasResult& WithStateMachineAliasArn(const Aws::String& value) { SetStateMachineAliasArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias.</p>
     */
    inline DescribeStateMachineAliasResult& WithStateMachineAliasArn(Aws::String&& value) { SetStateMachineAliasArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias.</p>
     */
    inline DescribeStateMachineAliasResult& WithStateMachineAliasArn(const char* value) { SetStateMachineAliasArn(value); return *this;}


    /**
     * <p>The name of the state machine alias.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the state machine alias.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the state machine alias.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the state machine alias.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the state machine alias.</p>
     */
    inline DescribeStateMachineAliasResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the state machine alias.</p>
     */
    inline DescribeStateMachineAliasResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the state machine alias.</p>
     */
    inline DescribeStateMachineAliasResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the alias.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the alias.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the alias.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the alias.</p>
     */
    inline DescribeStateMachineAliasResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the alias.</p>
     */
    inline DescribeStateMachineAliasResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the alias.</p>
     */
    inline DescribeStateMachineAliasResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The routing configuration of the alias.</p>
     */
    inline const Aws::Vector<RoutingConfigurationListItem>& GetRoutingConfiguration() const{ return m_routingConfiguration; }

    /**
     * <p>The routing configuration of the alias.</p>
     */
    inline void SetRoutingConfiguration(const Aws::Vector<RoutingConfigurationListItem>& value) { m_routingConfiguration = value; }

    /**
     * <p>The routing configuration of the alias.</p>
     */
    inline void SetRoutingConfiguration(Aws::Vector<RoutingConfigurationListItem>&& value) { m_routingConfiguration = std::move(value); }

    /**
     * <p>The routing configuration of the alias.</p>
     */
    inline DescribeStateMachineAliasResult& WithRoutingConfiguration(const Aws::Vector<RoutingConfigurationListItem>& value) { SetRoutingConfiguration(value); return *this;}

    /**
     * <p>The routing configuration of the alias.</p>
     */
    inline DescribeStateMachineAliasResult& WithRoutingConfiguration(Aws::Vector<RoutingConfigurationListItem>&& value) { SetRoutingConfiguration(std::move(value)); return *this;}

    /**
     * <p>The routing configuration of the alias.</p>
     */
    inline DescribeStateMachineAliasResult& AddRoutingConfiguration(const RoutingConfigurationListItem& value) { m_routingConfiguration.push_back(value); return *this; }

    /**
     * <p>The routing configuration of the alias.</p>
     */
    inline DescribeStateMachineAliasResult& AddRoutingConfiguration(RoutingConfigurationListItem&& value) { m_routingConfiguration.push_back(std::move(value)); return *this; }


    /**
     * <p>The date the state machine alias was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the state machine alias was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date the state machine alias was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date the state machine alias was created.</p>
     */
    inline DescribeStateMachineAliasResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the state machine alias was created.</p>
     */
    inline DescribeStateMachineAliasResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date the state machine alias was last updated.</p> <p>For a newly created
     * state machine, this is the same as the creation date.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const{ return m_updateDate; }

    /**
     * <p>The date the state machine alias was last updated.</p> <p>For a newly created
     * state machine, this is the same as the creation date.</p>
     */
    inline void SetUpdateDate(const Aws::Utils::DateTime& value) { m_updateDate = value; }

    /**
     * <p>The date the state machine alias was last updated.</p> <p>For a newly created
     * state machine, this is the same as the creation date.</p>
     */
    inline void SetUpdateDate(Aws::Utils::DateTime&& value) { m_updateDate = std::move(value); }

    /**
     * <p>The date the state machine alias was last updated.</p> <p>For a newly created
     * state machine, this is the same as the creation date.</p>
     */
    inline DescribeStateMachineAliasResult& WithUpdateDate(const Aws::Utils::DateTime& value) { SetUpdateDate(value); return *this;}

    /**
     * <p>The date the state machine alias was last updated.</p> <p>For a newly created
     * state machine, this is the same as the creation date.</p>
     */
    inline DescribeStateMachineAliasResult& WithUpdateDate(Aws::Utils::DateTime&& value) { SetUpdateDate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeStateMachineAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeStateMachineAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeStateMachineAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_stateMachineAliasArn;

    Aws::String m_name;

    Aws::String m_description;

    Aws::Vector<RoutingConfigurationListItem> m_routingConfiguration;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_updateDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
