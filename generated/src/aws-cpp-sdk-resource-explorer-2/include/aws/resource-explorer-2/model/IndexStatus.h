/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/OperationStatus.h>
#include <aws/resource-explorer-2/model/Index.h>
#include <aws/resource-explorer-2/model/ErrorDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ResourceExplorer2
{
namespace Model
{

  /**
   * <p>Contains information about the status of a Resource Explorer index operation
   * in a specific Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/IndexStatus">AWS
   * API Reference</a></p>
   */
  class IndexStatus
  {
  public:
    AWS_RESOURCEEXPLORER2_API IndexStatus() = default;
    AWS_RESOURCEEXPLORER2_API IndexStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API IndexStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current status of the index operation. Valid values are
     * <code>SUCCEEDED</code>, <code>FAILED</code>, <code>IN_PROGRESS</code>, or
     * <code>SKIPPED</code>.</p>
     */
    inline OperationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(OperationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline IndexStatus& WithStatus(OperationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Index& GetIndex() const { return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    template<typename IndexT = Index>
    void SetIndex(IndexT&& value) { m_indexHasBeenSet = true; m_index = std::forward<IndexT>(value); }
    template<typename IndexT = Index>
    IndexStatus& WithIndex(IndexT&& value) { SetIndex(std::forward<IndexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about any error that occurred during the index operation.</p>
     */
    inline const ErrorDetails& GetErrorDetails() const { return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    template<typename ErrorDetailsT = ErrorDetails>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = ErrorDetails>
    IndexStatus& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    ///@}
  private:

    OperationStatus m_status{OperationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Index m_index;
    bool m_indexHasBeenSet = false;

    ErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
