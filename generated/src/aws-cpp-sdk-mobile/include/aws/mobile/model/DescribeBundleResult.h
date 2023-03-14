/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/mobile/model/BundleDetails.h>
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
namespace Mobile
{
namespace Model
{
  /**
   * <p> Result structure contains the details of the bundle. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DescribeBundleResult">AWS
   * API Reference</a></p>
   */
  class DescribeBundleResult
  {
  public:
    AWS_MOBILE_API DescribeBundleResult();
    AWS_MOBILE_API DescribeBundleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MOBILE_API DescribeBundleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The details of the bundle. </p>
     */
    inline const BundleDetails& GetDetails() const{ return m_details; }

    /**
     * <p> The details of the bundle. </p>
     */
    inline void SetDetails(const BundleDetails& value) { m_details = value; }

    /**
     * <p> The details of the bundle. </p>
     */
    inline void SetDetails(BundleDetails&& value) { m_details = std::move(value); }

    /**
     * <p> The details of the bundle. </p>
     */
    inline DescribeBundleResult& WithDetails(const BundleDetails& value) { SetDetails(value); return *this;}

    /**
     * <p> The details of the bundle. </p>
     */
    inline DescribeBundleResult& WithDetails(BundleDetails&& value) { SetDetails(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeBundleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeBundleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeBundleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    BundleDetails m_details;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
