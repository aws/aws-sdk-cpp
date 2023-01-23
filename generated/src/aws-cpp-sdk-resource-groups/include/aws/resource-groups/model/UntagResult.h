/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ResourceGroups
{
namespace Model
{
  class UntagResult
  {
  public:
    AWS_RESOURCEGROUPS_API UntagResult();
    AWS_RESOURCEGROUPS_API UntagResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API UntagResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the resource group from which tags have been removed.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the resource group from which tags have been removed.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the resource group from which tags have been removed.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the resource group from which tags have been removed.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the resource group from which tags have been removed.</p>
     */
    inline UntagResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the resource group from which tags have been removed.</p>
     */
    inline UntagResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource group from which tags have been removed.</p>
     */
    inline UntagResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The keys of the tags that were removed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeys() const{ return m_keys; }

    /**
     * <p>The keys of the tags that were removed.</p>
     */
    inline void SetKeys(const Aws::Vector<Aws::String>& value) { m_keys = value; }

    /**
     * <p>The keys of the tags that were removed.</p>
     */
    inline void SetKeys(Aws::Vector<Aws::String>&& value) { m_keys = std::move(value); }

    /**
     * <p>The keys of the tags that were removed.</p>
     */
    inline UntagResult& WithKeys(const Aws::Vector<Aws::String>& value) { SetKeys(value); return *this;}

    /**
     * <p>The keys of the tags that were removed.</p>
     */
    inline UntagResult& WithKeys(Aws::Vector<Aws::String>&& value) { SetKeys(std::move(value)); return *this;}

    /**
     * <p>The keys of the tags that were removed.</p>
     */
    inline UntagResult& AddKeys(const Aws::String& value) { m_keys.push_back(value); return *this; }

    /**
     * <p>The keys of the tags that were removed.</p>
     */
    inline UntagResult& AddKeys(Aws::String&& value) { m_keys.push_back(std::move(value)); return *this; }

    /**
     * <p>The keys of the tags that were removed.</p>
     */
    inline UntagResult& AddKeys(const char* value) { m_keys.push_back(value); return *this; }

  private:

    Aws::String m_arn;

    Aws::Vector<Aws::String> m_keys;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
