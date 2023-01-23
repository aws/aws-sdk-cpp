/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/model/Service.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>The list of Amazon Web Services services returned by the
   * <a>DescribeServices</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeServicesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeServicesResult
  {
  public:
    AWS_SUPPORT_API DescribeServicesResult();
    AWS_SUPPORT_API DescribeServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API DescribeServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A JSON-formatted list of Amazon Web Services services.</p>
     */
    inline const Aws::Vector<Service>& GetServices() const{ return m_services; }

    /**
     * <p>A JSON-formatted list of Amazon Web Services services.</p>
     */
    inline void SetServices(const Aws::Vector<Service>& value) { m_services = value; }

    /**
     * <p>A JSON-formatted list of Amazon Web Services services.</p>
     */
    inline void SetServices(Aws::Vector<Service>&& value) { m_services = std::move(value); }

    /**
     * <p>A JSON-formatted list of Amazon Web Services services.</p>
     */
    inline DescribeServicesResult& WithServices(const Aws::Vector<Service>& value) { SetServices(value); return *this;}

    /**
     * <p>A JSON-formatted list of Amazon Web Services services.</p>
     */
    inline DescribeServicesResult& WithServices(Aws::Vector<Service>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>A JSON-formatted list of Amazon Web Services services.</p>
     */
    inline DescribeServicesResult& AddServices(const Service& value) { m_services.push_back(value); return *this; }

    /**
     * <p>A JSON-formatted list of Amazon Web Services services.</p>
     */
    inline DescribeServicesResult& AddServices(Service&& value) { m_services.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Service> m_services;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
