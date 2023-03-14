/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/ParameterTier.h>
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
namespace SSM
{
namespace Model
{
  class PutParameterResult
  {
  public:
    AWS_SSM_API PutParameterResult();
    AWS_SSM_API PutParameterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API PutParameterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The new version number of a parameter. If you edit a parameter value,
     * Parameter Store automatically creates a new version and assigns this new version
     * a unique ID. You can reference a parameter version ID in API operations or in
     * Systems Manager documents (SSM documents). By default, if you don't specify a
     * specific version, the system returns the latest parameter value when a parameter
     * is called.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The new version number of a parameter. If you edit a parameter value,
     * Parameter Store automatically creates a new version and assigns this new version
     * a unique ID. You can reference a parameter version ID in API operations or in
     * Systems Manager documents (SSM documents). By default, if you don't specify a
     * specific version, the system returns the latest parameter value when a parameter
     * is called.</p>
     */
    inline void SetVersion(long long value) { m_version = value; }

    /**
     * <p>The new version number of a parameter. If you edit a parameter value,
     * Parameter Store automatically creates a new version and assigns this new version
     * a unique ID. You can reference a parameter version ID in API operations or in
     * Systems Manager documents (SSM documents). By default, if you don't specify a
     * specific version, the system returns the latest parameter value when a parameter
     * is called.</p>
     */
    inline PutParameterResult& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>The tier assigned to the parameter.</p>
     */
    inline const ParameterTier& GetTier() const{ return m_tier; }

    /**
     * <p>The tier assigned to the parameter.</p>
     */
    inline void SetTier(const ParameterTier& value) { m_tier = value; }

    /**
     * <p>The tier assigned to the parameter.</p>
     */
    inline void SetTier(ParameterTier&& value) { m_tier = std::move(value); }

    /**
     * <p>The tier assigned to the parameter.</p>
     */
    inline PutParameterResult& WithTier(const ParameterTier& value) { SetTier(value); return *this;}

    /**
     * <p>The tier assigned to the parameter.</p>
     */
    inline PutParameterResult& WithTier(ParameterTier&& value) { SetTier(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutParameterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutParameterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutParameterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    long long m_version;

    ParameterTier m_tier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
