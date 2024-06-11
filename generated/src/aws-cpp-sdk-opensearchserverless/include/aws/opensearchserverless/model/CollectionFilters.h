/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/CollectionStatus.h>
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
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>A list of filter keys that you can use for LIST, UPDATE, and DELETE requests
   * to OpenSearch Serverless collections.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CollectionFilters">AWS
   * API Reference</a></p>
   */
  class CollectionFilters
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CollectionFilters();
    AWS_OPENSEARCHSERVERLESS_API CollectionFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API CollectionFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the collection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CollectionFilters& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CollectionFilters& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CollectionFilters& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the collection.</p>
     */
    inline const CollectionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CollectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CollectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CollectionFilters& WithStatus(const CollectionStatus& value) { SetStatus(value); return *this;}
    inline CollectionFilters& WithStatus(CollectionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CollectionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
