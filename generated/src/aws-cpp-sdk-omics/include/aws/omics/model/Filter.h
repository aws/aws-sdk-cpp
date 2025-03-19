/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ShareStatus.h>
#include <aws/omics/model/ShareResourceType.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>Use filters to return a subset of resources. You can define filters for
   * specific parameters, such as the resource status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/Filter">AWS API
   * Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_OMICS_API Filter() = default;
    AWS_OMICS_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter based on the Amazon Resource Number (ARN) of the resource. You can
     * specify up to 10 values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const { return m_resourceArns; }
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
    template<typename ResourceArnsT = Aws::Vector<Aws::String>>
    void SetResourceArns(ResourceArnsT&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::forward<ResourceArnsT>(value); }
    template<typename ResourceArnsT = Aws::Vector<Aws::String>>
    Filter& WithResourceArns(ResourceArnsT&& value) { SetResourceArns(std::forward<ResourceArnsT>(value)); return *this;}
    template<typename ResourceArnsT = Aws::String>
    Filter& AddResourceArns(ResourceArnsT&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.emplace_back(std::forward<ResourceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter based on the resource status. You can specify up to 10 values.</p>
     */
    inline const Aws::Vector<ShareStatus>& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::Vector<ShareStatus>>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::Vector<ShareStatus>>
    Filter& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    inline Filter& AddStatus(ShareStatus value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of resources to be filtered. You can specify one or more of the
     * resource types.</p>
     */
    inline const Aws::Vector<ShareResourceType>& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::Vector<ShareResourceType>>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::Vector<ShareResourceType>>
    Filter& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    inline Filter& AddType(ShareResourceType value) { m_typeHasBeenSet = true; m_type.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    Aws::Vector<ShareStatus> m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<ShareResourceType> m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
