/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
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
namespace SecretsManager
{
namespace Model
{
  class PutResourcePolicyResult
  {
  public:
    AWS_SECRETSMANAGER_API PutResourcePolicyResult();
    AWS_SECRETSMANAGER_API PutResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API PutResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the secret.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The ARN of the secret.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>The ARN of the secret.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>The ARN of the secret.</p>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>The ARN of the secret.</p>
     */
    inline PutResourcePolicyResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN of the secret.</p>
     */
    inline PutResourcePolicyResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the secret.</p>
     */
    inline PutResourcePolicyResult& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The name of the secret.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the secret.</p>
     */
    inline PutResourcePolicyResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the secret.</p>
     */
    inline PutResourcePolicyResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the secret.</p>
     */
    inline PutResourcePolicyResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_aRN;

    Aws::String m_name;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
