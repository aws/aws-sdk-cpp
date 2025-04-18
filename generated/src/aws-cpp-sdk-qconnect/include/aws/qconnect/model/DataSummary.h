/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/DataReference.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
namespace QConnect
{
namespace Model
{
  class DataDetails;

  /**
   * <p>Summary of the data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DataSummary">AWS
   * API Reference</a></p>
   */
  class DataSummary
  {
  public:
    AWS_QCONNECT_API DataSummary() = default;
    AWS_QCONNECT_API DataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API DataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Reference information about the content.</p>
     */
    inline const DataReference& GetReference() const { return m_reference; }
    inline bool ReferenceHasBeenSet() const { return m_referenceHasBeenSet; }
    template<typename ReferenceT = DataReference>
    void SetReference(ReferenceT&& value) { m_referenceHasBeenSet = true; m_reference = std::forward<ReferenceT>(value); }
    template<typename ReferenceT = DataReference>
    DataSummary& WithReference(ReferenceT&& value) { SetReference(std::forward<ReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the data.</p>
     */
    inline const DataDetails& GetDetails() const{
      return *m_details;
    }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = DataDetails>
    void SetDetails(DetailsT&& value) {
      m_detailsHasBeenSet = true; 
      m_details = Aws::MakeShared<DataDetails>("DataSummary", std::forward<DetailsT>(value));
    }
    template<typename DetailsT = DataDetails>
    DataSummary& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}
  private:

    DataReference m_reference;
    bool m_referenceHasBeenSet = false;

    std::shared_ptr<DataDetails> m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
