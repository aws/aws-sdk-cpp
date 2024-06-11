/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InputSecurityGroupState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/InputWhitelistRule.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DescribeInputSecurityGroupResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputSecurityGroupResponse">AWS
   * API Reference</a></p>
   */
  class DescribeInputSecurityGroupResult
  {
  public:
    AWS_MEDIALIVE_API DescribeInputSecurityGroupResult();
    AWS_MEDIALIVE_API DescribeInputSecurityGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeInputSecurityGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Unique ARN of Input Security Group
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribeInputSecurityGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeInputSecurityGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeInputSecurityGroupResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The Id of the Input Security Group
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline DescribeInputSecurityGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DescribeInputSecurityGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DescribeInputSecurityGroupResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The list of inputs currently using this Input Security Group.
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputs = value; }
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputs = std::move(value); }
    inline DescribeInputSecurityGroupResult& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}
    inline DescribeInputSecurityGroupResult& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}
    inline DescribeInputSecurityGroupResult& AddInputs(const Aws::String& value) { m_inputs.push_back(value); return *this; }
    inline DescribeInputSecurityGroupResult& AddInputs(Aws::String&& value) { m_inputs.push_back(std::move(value)); return *this; }
    inline DescribeInputSecurityGroupResult& AddInputs(const char* value) { m_inputs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The current state of the Input Security Group.
     */
    inline const InputSecurityGroupState& GetState() const{ return m_state; }
    inline void SetState(const InputSecurityGroupState& value) { m_state = value; }
    inline void SetState(InputSecurityGroupState&& value) { m_state = std::move(value); }
    inline DescribeInputSecurityGroupResult& WithState(const InputSecurityGroupState& value) { SetState(value); return *this;}
    inline DescribeInputSecurityGroupResult& WithState(InputSecurityGroupState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeInputSecurityGroupResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeInputSecurityGroupResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeInputSecurityGroupResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeInputSecurityGroupResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeInputSecurityGroupResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeInputSecurityGroupResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeInputSecurityGroupResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeInputSecurityGroupResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeInputSecurityGroupResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * Whitelist rules and their sync status
     */
    inline const Aws::Vector<InputWhitelistRule>& GetWhitelistRules() const{ return m_whitelistRules; }
    inline void SetWhitelistRules(const Aws::Vector<InputWhitelistRule>& value) { m_whitelistRules = value; }
    inline void SetWhitelistRules(Aws::Vector<InputWhitelistRule>&& value) { m_whitelistRules = std::move(value); }
    inline DescribeInputSecurityGroupResult& WithWhitelistRules(const Aws::Vector<InputWhitelistRule>& value) { SetWhitelistRules(value); return *this;}
    inline DescribeInputSecurityGroupResult& WithWhitelistRules(Aws::Vector<InputWhitelistRule>&& value) { SetWhitelistRules(std::move(value)); return *this;}
    inline DescribeInputSecurityGroupResult& AddWhitelistRules(const InputWhitelistRule& value) { m_whitelistRules.push_back(value); return *this; }
    inline DescribeInputSecurityGroupResult& AddWhitelistRules(InputWhitelistRule&& value) { m_whitelistRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeInputSecurityGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeInputSecurityGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeInputSecurityGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::Vector<Aws::String> m_inputs;

    InputSecurityGroupState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Vector<InputWhitelistRule> m_whitelistRules;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
