/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-explorer-2/model/IndexType.h>
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
   * <p>An index is the data store used by Amazon Web Services Resource Explorer to
   * hold information about your Amazon Web Services resources that the service
   * discovers. Creating an index in an Amazon Web Services Region turns on Resource
   * Explorer and lets it discover your resources.</p> <p>By default, an index is
   * <i>local</i>, meaning that it contains information about resources in only the
   * same Region as the index. However, you can promote the index of one Region in
   * the account by calling <a>UpdateIndexType</a> to convert it into an aggregator
   * index. The aggregator index receives a replicated copy of the index information
   * from all other Regions where Resource Explorer is turned on. This allows search
   * operations in that Region to return results from all Regions in the
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/Index">AWS
   * API Reference</a></p>
   */
  class Index
  {
  public:
    AWS_RESOURCEEXPLORER2_API Index();
    AWS_RESOURCEEXPLORER2_API Index(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Index& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline Index& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline Index& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline Index& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Web Services Region in which the index exists.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region in which the index exists.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region in which the index exists.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region in which the index exists.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region in which the index exists.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region in which the index exists.</p>
     */
    inline Index& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region in which the index exists.</p>
     */
    inline Index& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region in which the index exists.</p>
     */
    inline Index& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The type of index. It can be one of the following values:</p> <ul> <li> <p>
     * <b>LOCAL</b> – The index contains information about resources from only the same
     * Amazon Web Services Region.</p> </li> <li> <p> <b>AGGREGATOR</b> – Resource
     * Explorer replicates copies of the indexed information about resources in all
     * other Amazon Web Services Regions to the aggregator index. This lets search
     * results in the Region with the aggregator index to include resources from all
     * Regions in the account where Resource Explorer is turned on.</p> </li> </ul>
     */
    inline const IndexType& GetType() const{ return m_type; }

    /**
     * <p>The type of index. It can be one of the following values:</p> <ul> <li> <p>
     * <b>LOCAL</b> – The index contains information about resources from only the same
     * Amazon Web Services Region.</p> </li> <li> <p> <b>AGGREGATOR</b> – Resource
     * Explorer replicates copies of the indexed information about resources in all
     * other Amazon Web Services Regions to the aggregator index. This lets search
     * results in the Region with the aggregator index to include resources from all
     * Regions in the account where Resource Explorer is turned on.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of index. It can be one of the following values:</p> <ul> <li> <p>
     * <b>LOCAL</b> – The index contains information about resources from only the same
     * Amazon Web Services Region.</p> </li> <li> <p> <b>AGGREGATOR</b> – Resource
     * Explorer replicates copies of the indexed information about resources in all
     * other Amazon Web Services Regions to the aggregator index. This lets search
     * results in the Region with the aggregator index to include resources from all
     * Regions in the account where Resource Explorer is turned on.</p> </li> </ul>
     */
    inline void SetType(const IndexType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of index. It can be one of the following values:</p> <ul> <li> <p>
     * <b>LOCAL</b> – The index contains information about resources from only the same
     * Amazon Web Services Region.</p> </li> <li> <p> <b>AGGREGATOR</b> – Resource
     * Explorer replicates copies of the indexed information about resources in all
     * other Amazon Web Services Regions to the aggregator index. This lets search
     * results in the Region with the aggregator index to include resources from all
     * Regions in the account where Resource Explorer is turned on.</p> </li> </ul>
     */
    inline void SetType(IndexType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of index. It can be one of the following values:</p> <ul> <li> <p>
     * <b>LOCAL</b> – The index contains information about resources from only the same
     * Amazon Web Services Region.</p> </li> <li> <p> <b>AGGREGATOR</b> – Resource
     * Explorer replicates copies of the indexed information about resources in all
     * other Amazon Web Services Regions to the aggregator index. This lets search
     * results in the Region with the aggregator index to include resources from all
     * Regions in the account where Resource Explorer is turned on.</p> </li> </ul>
     */
    inline Index& WithType(const IndexType& value) { SetType(value); return *this;}

    /**
     * <p>The type of index. It can be one of the following values:</p> <ul> <li> <p>
     * <b>LOCAL</b> – The index contains information about resources from only the same
     * Amazon Web Services Region.</p> </li> <li> <p> <b>AGGREGATOR</b> – Resource
     * Explorer replicates copies of the indexed information about resources in all
     * other Amazon Web Services Regions to the aggregator index. This lets search
     * results in the Region with the aggregator index to include resources from all
     * Regions in the account where Resource Explorer is turned on.</p> </li> </ul>
     */
    inline Index& WithType(IndexType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    IndexType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
