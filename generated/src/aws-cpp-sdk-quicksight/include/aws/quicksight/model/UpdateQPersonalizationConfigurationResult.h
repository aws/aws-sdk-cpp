/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PersonalizationMode.h>
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
namespace QuickSight
{
namespace Model
{
  class UpdateQPersonalizationConfigurationResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateQPersonalizationConfigurationResult();
    AWS_QUICKSIGHT_API UpdateQPersonalizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateQPersonalizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The personalization mode that is used for the personalization
     * configuration.</p>
     */
    inline const PersonalizationMode& GetPersonalizationMode() const{ return m_personalizationMode; }
    inline void SetPersonalizationMode(const PersonalizationMode& value) { m_personalizationMode = value; }
    inline void SetPersonalizationMode(PersonalizationMode&& value) { m_personalizationMode = std::move(value); }
    inline UpdateQPersonalizationConfigurationResult& WithPersonalizationMode(const PersonalizationMode& value) { SetPersonalizationMode(value); return *this;}
    inline UpdateQPersonalizationConfigurationResult& WithPersonalizationMode(PersonalizationMode&& value) { SetPersonalizationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateQPersonalizationConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateQPersonalizationConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateQPersonalizationConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline UpdateQPersonalizationConfigurationResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    PersonalizationMode m_personalizationMode;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
