/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/View.h>
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
namespace ResourceExplorer2
{
namespace Model
{
  class CreateViewResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API CreateViewResult();
    AWS_RESOURCEEXPLORER2_API CreateViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API CreateViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains the details about the new view.</p>
     */
    inline const View& GetView() const{ return m_view; }

    /**
     * <p>A structure that contains the details about the new view.</p>
     */
    inline void SetView(const View& value) { m_view = value; }

    /**
     * <p>A structure that contains the details about the new view.</p>
     */
    inline void SetView(View&& value) { m_view = std::move(value); }

    /**
     * <p>A structure that contains the details about the new view.</p>
     */
    inline CreateViewResult& WithView(const View& value) { SetView(value); return *this;}

    /**
     * <p>A structure that contains the details about the new view.</p>
     */
    inline CreateViewResult& WithView(View&& value) { SetView(std::move(value)); return *this;}

  private:

    View m_view;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
