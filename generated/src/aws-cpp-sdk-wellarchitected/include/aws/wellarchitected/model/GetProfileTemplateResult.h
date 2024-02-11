/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/ProfileTemplate.h>
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
namespace WellArchitected
{
namespace Model
{
  class GetProfileTemplateResult
  {
  public:
    AWS_WELLARCHITECTED_API GetProfileTemplateResult();
    AWS_WELLARCHITECTED_API GetProfileTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API GetProfileTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The profile template.</p>
     */
    inline const ProfileTemplate& GetProfileTemplate() const{ return m_profileTemplate; }

    /**
     * <p>The profile template.</p>
     */
    inline void SetProfileTemplate(const ProfileTemplate& value) { m_profileTemplate = value; }

    /**
     * <p>The profile template.</p>
     */
    inline void SetProfileTemplate(ProfileTemplate&& value) { m_profileTemplate = std::move(value); }

    /**
     * <p>The profile template.</p>
     */
    inline GetProfileTemplateResult& WithProfileTemplate(const ProfileTemplate& value) { SetProfileTemplate(value); return *this;}

    /**
     * <p>The profile template.</p>
     */
    inline GetProfileTemplateResult& WithProfileTemplate(ProfileTemplate&& value) { SetProfileTemplate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetProfileTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetProfileTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetProfileTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProfileTemplate m_profileTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
