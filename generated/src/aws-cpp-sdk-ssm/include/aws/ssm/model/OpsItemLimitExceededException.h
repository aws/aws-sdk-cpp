/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>The request caused OpsItems to exceed one or more quotas.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItemLimitExceededException">AWS
   * API Reference</a></p>
   */
  class OpsItemLimitExceededException
  {
  public:
    AWS_SSM_API OpsItemLimitExceededException();
    AWS_SSM_API OpsItemLimitExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemLimitExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }
    inline OpsItemLimitExceededException& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}
    inline OpsItemLimitExceededException& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(std::move(value)); return *this;}
    inline OpsItemLimitExceededException& AddResourceTypes(const Aws::String& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    inline OpsItemLimitExceededException& AddResourceTypes(Aws::String&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }
    inline OpsItemLimitExceededException& AddResourceTypes(const char* value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline OpsItemLimitExceededException& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLimitType() const{ return m_limitType; }
    inline bool LimitTypeHasBeenSet() const { return m_limitTypeHasBeenSet; }
    inline void SetLimitType(const Aws::String& value) { m_limitTypeHasBeenSet = true; m_limitType = value; }
    inline void SetLimitType(Aws::String&& value) { m_limitTypeHasBeenSet = true; m_limitType = std::move(value); }
    inline void SetLimitType(const char* value) { m_limitTypeHasBeenSet = true; m_limitType.assign(value); }
    inline OpsItemLimitExceededException& WithLimitType(const Aws::String& value) { SetLimitType(value); return *this;}
    inline OpsItemLimitExceededException& WithLimitType(Aws::String&& value) { SetLimitType(std::move(value)); return *this;}
    inline OpsItemLimitExceededException& WithLimitType(const char* value) { SetLimitType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline OpsItemLimitExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline OpsItemLimitExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline OpsItemLimitExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_limitType;
    bool m_limitTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
