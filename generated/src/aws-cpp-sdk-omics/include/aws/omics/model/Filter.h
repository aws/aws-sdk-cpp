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
    AWS_OMICS_API Filter();
    AWS_OMICS_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filter based on the Amazon Resource Number (ARN) of the resource. You can
     * specify up to 10 values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>Filter based on the Amazon Resource Number (ARN) of the resource. You can
     * specify up to 10 values.</p>
     */
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

    /**
     * <p>Filter based on the Amazon Resource Number (ARN) of the resource. You can
     * specify up to 10 values.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>Filter based on the Amazon Resource Number (ARN) of the resource. You can
     * specify up to 10 values.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

    /**
     * <p>Filter based on the Amazon Resource Number (ARN) of the resource. You can
     * specify up to 10 values.</p>
     */
    inline Filter& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>Filter based on the Amazon Resource Number (ARN) of the resource. You can
     * specify up to 10 values.</p>
     */
    inline Filter& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>Filter based on the Amazon Resource Number (ARN) of the resource. You can
     * specify up to 10 values.</p>
     */
    inline Filter& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>Filter based on the Amazon Resource Number (ARN) of the resource. You can
     * specify up to 10 values.</p>
     */
    inline Filter& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Filter based on the Amazon Resource Number (ARN) of the resource. You can
     * specify up to 10 values.</p>
     */
    inline Filter& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }


    /**
     * <p>Filter based on the resource status. You can specify up to 10 values.</p>
     */
    inline const Aws::Vector<ShareStatus>& GetStatus() const{ return m_status; }

    /**
     * <p>Filter based on the resource status. You can specify up to 10 values.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Filter based on the resource status. You can specify up to 10 values.</p>
     */
    inline void SetStatus(const Aws::Vector<ShareStatus>& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Filter based on the resource status. You can specify up to 10 values.</p>
     */
    inline void SetStatus(Aws::Vector<ShareStatus>&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Filter based on the resource status. You can specify up to 10 values.</p>
     */
    inline Filter& WithStatus(const Aws::Vector<ShareStatus>& value) { SetStatus(value); return *this;}

    /**
     * <p>Filter based on the resource status. You can specify up to 10 values.</p>
     */
    inline Filter& WithStatus(Aws::Vector<ShareStatus>&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Filter based on the resource status. You can specify up to 10 values.</p>
     */
    inline Filter& AddStatus(const ShareStatus& value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }

    /**
     * <p>Filter based on the resource status. You can specify up to 10 values.</p>
     */
    inline Filter& AddStatus(ShareStatus&& value) { m_statusHasBeenSet = true; m_status.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of resources to be filtered. You can specify one or more of the
     * resource types.</p>
     */
    inline const Aws::Vector<ShareResourceType>& GetType() const{ return m_type; }

    /**
     * <p>The type of resources to be filtered. You can specify one or more of the
     * resource types.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of resources to be filtered. You can specify one or more of the
     * resource types.</p>
     */
    inline void SetType(const Aws::Vector<ShareResourceType>& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of resources to be filtered. You can specify one or more of the
     * resource types.</p>
     */
    inline void SetType(Aws::Vector<ShareResourceType>&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of resources to be filtered. You can specify one or more of the
     * resource types.</p>
     */
    inline Filter& WithType(const Aws::Vector<ShareResourceType>& value) { SetType(value); return *this;}

    /**
     * <p>The type of resources to be filtered. You can specify one or more of the
     * resource types.</p>
     */
    inline Filter& WithType(Aws::Vector<ShareResourceType>&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of resources to be filtered. You can specify one or more of the
     * resource types.</p>
     */
    inline Filter& AddType(const ShareResourceType& value) { m_typeHasBeenSet = true; m_type.push_back(value); return *this; }

    /**
     * <p>The type of resources to be filtered. You can specify one or more of the
     * resource types.</p>
     */
    inline Filter& AddType(ShareResourceType&& value) { m_typeHasBeenSet = true; m_type.push_back(std::move(value)); return *this; }

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
