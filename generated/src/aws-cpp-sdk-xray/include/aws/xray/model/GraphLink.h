/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p> The relation between two services. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GraphLink">AWS API
   * Reference</a></p>
   */
  class GraphLink
  {
  public:
    AWS_XRAY_API GraphLink() = default;
    AWS_XRAY_API GraphLink(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API GraphLink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Relationship of a trace to the corresponding service. </p>
     */
    inline const Aws::String& GetReferenceType() const { return m_referenceType; }
    inline bool ReferenceTypeHasBeenSet() const { return m_referenceTypeHasBeenSet; }
    template<typename ReferenceTypeT = Aws::String>
    void SetReferenceType(ReferenceTypeT&& value) { m_referenceTypeHasBeenSet = true; m_referenceType = std::forward<ReferenceTypeT>(value); }
    template<typename ReferenceTypeT = Aws::String>
    GraphLink& WithReferenceType(ReferenceTypeT&& value) { SetReferenceType(std::forward<ReferenceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Source trace of a link relationship. </p>
     */
    inline const Aws::String& GetSourceTraceId() const { return m_sourceTraceId; }
    inline bool SourceTraceIdHasBeenSet() const { return m_sourceTraceIdHasBeenSet; }
    template<typename SourceTraceIdT = Aws::String>
    void SetSourceTraceId(SourceTraceIdT&& value) { m_sourceTraceIdHasBeenSet = true; m_sourceTraceId = std::forward<SourceTraceIdT>(value); }
    template<typename SourceTraceIdT = Aws::String>
    GraphLink& WithSourceTraceId(SourceTraceIdT&& value) { SetSourceTraceId(std::forward<SourceTraceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Destination traces of a link relationship. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationTraceIds() const { return m_destinationTraceIds; }
    inline bool DestinationTraceIdsHasBeenSet() const { return m_destinationTraceIdsHasBeenSet; }
    template<typename DestinationTraceIdsT = Aws::Vector<Aws::String>>
    void SetDestinationTraceIds(DestinationTraceIdsT&& value) { m_destinationTraceIdsHasBeenSet = true; m_destinationTraceIds = std::forward<DestinationTraceIdsT>(value); }
    template<typename DestinationTraceIdsT = Aws::Vector<Aws::String>>
    GraphLink& WithDestinationTraceIds(DestinationTraceIdsT&& value) { SetDestinationTraceIds(std::forward<DestinationTraceIdsT>(value)); return *this;}
    template<typename DestinationTraceIdsT = Aws::String>
    GraphLink& AddDestinationTraceIds(DestinationTraceIdsT&& value) { m_destinationTraceIdsHasBeenSet = true; m_destinationTraceIds.emplace_back(std::forward<DestinationTraceIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_referenceType;
    bool m_referenceTypeHasBeenSet = false;

    Aws::String m_sourceTraceId;
    bool m_sourceTraceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationTraceIds;
    bool m_destinationTraceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
