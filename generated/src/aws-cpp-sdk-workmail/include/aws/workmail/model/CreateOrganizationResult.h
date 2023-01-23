/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
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
namespace WorkMail
{
namespace Model
{
  class CreateOrganizationResult
  {
  public:
    AWS_WORKMAIL_API CreateOrganizationResult();
    AWS_WORKMAIL_API CreateOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API CreateOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The organization ID.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The organization ID.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationId = value; }

    /**
     * <p>The organization ID.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationId = std::move(value); }

    /**
     * <p>The organization ID.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationId.assign(value); }

    /**
     * <p>The organization ID.</p>
     */
    inline CreateOrganizationResult& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The organization ID.</p>
     */
    inline CreateOrganizationResult& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The organization ID.</p>
     */
    inline CreateOrganizationResult& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}

  private:

    Aws::String m_organizationId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
