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
    AWS_XRAY_API GraphLink();
    AWS_XRAY_API GraphLink(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API GraphLink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Relationship of a trace to the corresponding service. </p>
     */
    inline const Aws::String& GetReferenceType() const{ return m_referenceType; }
    inline bool ReferenceTypeHasBeenSet() const { return m_referenceTypeHasBeenSet; }
    inline void SetReferenceType(const Aws::String& value) { m_referenceTypeHasBeenSet = true; m_referenceType = value; }
    inline void SetReferenceType(Aws::String&& value) { m_referenceTypeHasBeenSet = true; m_referenceType = std::move(value); }
    inline void SetReferenceType(const char* value) { m_referenceTypeHasBeenSet = true; m_referenceType.assign(value); }
    inline GraphLink& WithReferenceType(const Aws::String& value) { SetReferenceType(value); return *this;}
    inline GraphLink& WithReferenceType(Aws::String&& value) { SetReferenceType(std::move(value)); return *this;}
    inline GraphLink& WithReferenceType(const char* value) { SetReferenceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Source trace of a link relationship. </p>
     */
    inline const Aws::String& GetSourceTraceId() const{ return m_sourceTraceId; }
    inline bool SourceTraceIdHasBeenSet() const { return m_sourceTraceIdHasBeenSet; }
    inline void SetSourceTraceId(const Aws::String& value) { m_sourceTraceIdHasBeenSet = true; m_sourceTraceId = value; }
    inline void SetSourceTraceId(Aws::String&& value) { m_sourceTraceIdHasBeenSet = true; m_sourceTraceId = std::move(value); }
    inline void SetSourceTraceId(const char* value) { m_sourceTraceIdHasBeenSet = true; m_sourceTraceId.assign(value); }
    inline GraphLink& WithSourceTraceId(const Aws::String& value) { SetSourceTraceId(value); return *this;}
    inline GraphLink& WithSourceTraceId(Aws::String&& value) { SetSourceTraceId(std::move(value)); return *this;}
    inline GraphLink& WithSourceTraceId(const char* value) { SetSourceTraceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Destination traces of a link relationship. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationTraceIds() const{ return m_destinationTraceIds; }
    inline bool DestinationTraceIdsHasBeenSet() const { return m_destinationTraceIdsHasBeenSet; }
    inline void SetDestinationTraceIds(const Aws::Vector<Aws::String>& value) { m_destinationTraceIdsHasBeenSet = true; m_destinationTraceIds = value; }
    inline void SetDestinationTraceIds(Aws::Vector<Aws::String>&& value) { m_destinationTraceIdsHasBeenSet = true; m_destinationTraceIds = std::move(value); }
    inline GraphLink& WithDestinationTraceIds(const Aws::Vector<Aws::String>& value) { SetDestinationTraceIds(value); return *this;}
    inline GraphLink& WithDestinationTraceIds(Aws::Vector<Aws::String>&& value) { SetDestinationTraceIds(std::move(value)); return *this;}
    inline GraphLink& AddDestinationTraceIds(const Aws::String& value) { m_destinationTraceIdsHasBeenSet = true; m_destinationTraceIds.push_back(value); return *this; }
    inline GraphLink& AddDestinationTraceIds(Aws::String&& value) { m_destinationTraceIdsHasBeenSet = true; m_destinationTraceIds.push_back(std::move(value)); return *this; }
    inline GraphLink& AddDestinationTraceIds(const char* value) { m_destinationTraceIdsHasBeenSet = true; m_destinationTraceIds.push_back(value); return *this; }
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
