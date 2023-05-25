/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/ShippingLabelStatus.h>
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
namespace Snowball
{
namespace Model
{
  class CreateReturnShippingLabelResult
  {
  public:
    AWS_SNOWBALL_API CreateReturnShippingLabelResult();
    AWS_SNOWBALL_API CreateReturnShippingLabelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API CreateReturnShippingLabelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * Amazon Web Services.</p>
     */
    inline const ShippingLabelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * Amazon Web Services.</p>
     */
    inline void SetStatus(const ShippingLabelStatus& value) { m_status = value; }

    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * Amazon Web Services.</p>
     */
    inline void SetStatus(ShippingLabelStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * Amazon Web Services.</p>
     */
    inline CreateReturnShippingLabelResult& WithStatus(const ShippingLabelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * Amazon Web Services.</p>
     */
    inline CreateReturnShippingLabelResult& WithStatus(ShippingLabelStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateReturnShippingLabelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateReturnShippingLabelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateReturnShippingLabelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ShippingLabelStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
