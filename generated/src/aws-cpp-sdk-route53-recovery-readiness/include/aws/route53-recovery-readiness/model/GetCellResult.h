/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class GetCellResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API GetCellResult();
    AWS_ROUTE53RECOVERYREADINESS_API GetCellResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API GetCellResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline const Aws::String& GetCellArn() const{ return m_cellArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline void SetCellArn(const Aws::String& value) { m_cellArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline void SetCellArn(Aws::String&& value) { m_cellArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline void SetCellArn(const char* value) { m_cellArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline GetCellResult& WithCellArn(const Aws::String& value) { SetCellArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline GetCellResult& WithCellArn(Aws::String&& value) { SetCellArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline GetCellResult& WithCellArn(const char* value) { SetCellArn(value); return *this;}


    /**
     * <p>The name of the cell.</p>
     */
    inline const Aws::String& GetCellName() const{ return m_cellName; }

    /**
     * <p>The name of the cell.</p>
     */
    inline void SetCellName(const Aws::String& value) { m_cellName = value; }

    /**
     * <p>The name of the cell.</p>
     */
    inline void SetCellName(Aws::String&& value) { m_cellName = std::move(value); }

    /**
     * <p>The name of the cell.</p>
     */
    inline void SetCellName(const char* value) { m_cellName.assign(value); }

    /**
     * <p>The name of the cell.</p>
     */
    inline GetCellResult& WithCellName(const Aws::String& value) { SetCellName(value); return *this;}

    /**
     * <p>The name of the cell.</p>
     */
    inline GetCellResult& WithCellName(Aws::String&& value) { SetCellName(std::move(value)); return *this;}

    /**
     * <p>The name of the cell.</p>
     */
    inline GetCellResult& WithCellName(const char* value) { SetCellName(value); return *this;}


    /**
     * <p>A list of cell ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCells() const{ return m_cells; }

    /**
     * <p>A list of cell ARNs.</p>
     */
    inline void SetCells(const Aws::Vector<Aws::String>& value) { m_cells = value; }

    /**
     * <p>A list of cell ARNs.</p>
     */
    inline void SetCells(Aws::Vector<Aws::String>&& value) { m_cells = std::move(value); }

    /**
     * <p>A list of cell ARNs.</p>
     */
    inline GetCellResult& WithCells(const Aws::Vector<Aws::String>& value) { SetCells(value); return *this;}

    /**
     * <p>A list of cell ARNs.</p>
     */
    inline GetCellResult& WithCells(Aws::Vector<Aws::String>&& value) { SetCells(std::move(value)); return *this;}

    /**
     * <p>A list of cell ARNs.</p>
     */
    inline GetCellResult& AddCells(const Aws::String& value) { m_cells.push_back(value); return *this; }

    /**
     * <p>A list of cell ARNs.</p>
     */
    inline GetCellResult& AddCells(Aws::String&& value) { m_cells.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of cell ARNs.</p>
     */
    inline GetCellResult& AddCells(const char* value) { m_cells.push_back(value); return *this; }


    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParentReadinessScopes() const{ return m_parentReadinessScopes; }

    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline void SetParentReadinessScopes(const Aws::Vector<Aws::String>& value) { m_parentReadinessScopes = value; }

    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline void SetParentReadinessScopes(Aws::Vector<Aws::String>&& value) { m_parentReadinessScopes = std::move(value); }

    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline GetCellResult& WithParentReadinessScopes(const Aws::Vector<Aws::String>& value) { SetParentReadinessScopes(value); return *this;}

    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline GetCellResult& WithParentReadinessScopes(Aws::Vector<Aws::String>&& value) { SetParentReadinessScopes(std::move(value)); return *this;}

    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline GetCellResult& AddParentReadinessScopes(const Aws::String& value) { m_parentReadinessScopes.push_back(value); return *this; }

    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline GetCellResult& AddParentReadinessScopes(Aws::String&& value) { m_parentReadinessScopes.push_back(std::move(value)); return *this; }

    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline GetCellResult& AddParentReadinessScopes(const char* value) { m_parentReadinessScopes.push_back(value); return *this; }


    /**
     * <p>Tags on the resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags on the resources.</p>
     */
    inline GetCellResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags on the resources.</p>
     */
    inline GetCellResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags on the resources.</p>
     */
    inline GetCellResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline GetCellResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline GetCellResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline GetCellResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline GetCellResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline GetCellResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline GetCellResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_cellArn;

    Aws::String m_cellName;

    Aws::Vector<Aws::String> m_cells;

    Aws::Vector<Aws::String> m_parentReadinessScopes;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
