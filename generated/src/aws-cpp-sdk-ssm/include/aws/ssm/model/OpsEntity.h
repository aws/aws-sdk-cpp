/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/OpsEntityItem.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The result of the query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsEntity">AWS API
   * Reference</a></p>
   */
  class OpsEntity
  {
  public:
    AWS_SSM_API OpsEntity();
    AWS_SSM_API OpsEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline OpsEntity& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline OpsEntity& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline OpsEntity& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data returned by the query.</p>
     */
    inline const Aws::Map<Aws::String, OpsEntityItem>& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const Aws::Map<Aws::String, OpsEntityItem>& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(Aws::Map<Aws::String, OpsEntityItem>&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline OpsEntity& WithData(const Aws::Map<Aws::String, OpsEntityItem>& value) { SetData(value); return *this;}
    inline OpsEntity& WithData(Aws::Map<Aws::String, OpsEntityItem>&& value) { SetData(std::move(value)); return *this;}
    inline OpsEntity& AddData(const Aws::String& key, const OpsEntityItem& value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }
    inline OpsEntity& AddData(Aws::String&& key, const OpsEntityItem& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }
    inline OpsEntity& AddData(const Aws::String& key, OpsEntityItem&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }
    inline OpsEntity& AddData(Aws::String&& key, OpsEntityItem&& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), std::move(value)); return *this; }
    inline OpsEntity& AddData(const char* key, OpsEntityItem&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }
    inline OpsEntity& AddData(const char* key, const OpsEntityItem& value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Map<Aws::String, OpsEntityItem> m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
