/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/Dataset.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeDatasetResult
  {
  public:
    AWS_PERSONALIZE_API DescribeDatasetResult();
    AWS_PERSONALIZE_API DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A listing of the dataset's properties.</p>
     */
    inline const Dataset& GetDataset() const{ return m_dataset; }

    /**
     * <p>A listing of the dataset's properties.</p>
     */
    inline void SetDataset(const Dataset& value) { m_dataset = value; }

    /**
     * <p>A listing of the dataset's properties.</p>
     */
    inline void SetDataset(Dataset&& value) { m_dataset = std::move(value); }

    /**
     * <p>A listing of the dataset's properties.</p>
     */
    inline DescribeDatasetResult& WithDataset(const Dataset& value) { SetDataset(value); return *this;}

    /**
     * <p>A listing of the dataset's properties.</p>
     */
    inline DescribeDatasetResult& WithDataset(Dataset&& value) { SetDataset(std::move(value)); return *this;}

  private:

    Dataset m_dataset;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
