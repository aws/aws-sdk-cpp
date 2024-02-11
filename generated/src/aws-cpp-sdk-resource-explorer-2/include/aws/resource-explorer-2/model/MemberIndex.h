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
   * discovers. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/MemberIndex">AWS
   * API Reference</a></p>
   */
  class MemberIndex
  {
  public:
    AWS_RESOURCEEXPLORER2_API MemberIndex();
    AWS_RESOURCEEXPLORER2_API MemberIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API MemberIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account ID for the index.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID for the index.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID for the index.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID for the index.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID for the index.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID for the index.</p>
     */
    inline MemberIndex& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID for the index.</p>
     */
    inline MemberIndex& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID for the index.</p>
     */
    inline MemberIndex& WithAccountId(const char* value) { SetAccountId(value); return *this;}


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
    inline MemberIndex& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline MemberIndex& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline MemberIndex& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline MemberIndex& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region in which the index exists.</p>
     */
    inline MemberIndex& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region in which the index exists.</p>
     */
    inline MemberIndex& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The type of index. It can be one of the following values: </p> <ul> <li> <p>
     * <code>LOCAL</code> – The index contains information about resources from only
     * the same Amazon Web Services Region.</p> </li> <li> <p> <code>AGGREGATOR</code>
     * – Resource Explorer replicates copies of the indexed information about resources
     * in all other Amazon Web Services Regions to the aggregator index. This lets
     * search results in the Region with the aggregator index to include resources from
     * all Regions in the account where Resource Explorer is turned on.</p> </li> </ul>
     */
    inline const IndexType& GetType() const{ return m_type; }

    /**
     * <p>The type of index. It can be one of the following values: </p> <ul> <li> <p>
     * <code>LOCAL</code> – The index contains information about resources from only
     * the same Amazon Web Services Region.</p> </li> <li> <p> <code>AGGREGATOR</code>
     * – Resource Explorer replicates copies of the indexed information about resources
     * in all other Amazon Web Services Regions to the aggregator index. This lets
     * search results in the Region with the aggregator index to include resources from
     * all Regions in the account where Resource Explorer is turned on.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of index. It can be one of the following values: </p> <ul> <li> <p>
     * <code>LOCAL</code> – The index contains information about resources from only
     * the same Amazon Web Services Region.</p> </li> <li> <p> <code>AGGREGATOR</code>
     * – Resource Explorer replicates copies of the indexed information about resources
     * in all other Amazon Web Services Regions to the aggregator index. This lets
     * search results in the Region with the aggregator index to include resources from
     * all Regions in the account where Resource Explorer is turned on.</p> </li> </ul>
     */
    inline void SetType(const IndexType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of index. It can be one of the following values: </p> <ul> <li> <p>
     * <code>LOCAL</code> – The index contains information about resources from only
     * the same Amazon Web Services Region.</p> </li> <li> <p> <code>AGGREGATOR</code>
     * – Resource Explorer replicates copies of the indexed information about resources
     * in all other Amazon Web Services Regions to the aggregator index. This lets
     * search results in the Region with the aggregator index to include resources from
     * all Regions in the account where Resource Explorer is turned on.</p> </li> </ul>
     */
    inline void SetType(IndexType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of index. It can be one of the following values: </p> <ul> <li> <p>
     * <code>LOCAL</code> – The index contains information about resources from only
     * the same Amazon Web Services Region.</p> </li> <li> <p> <code>AGGREGATOR</code>
     * – Resource Explorer replicates copies of the indexed information about resources
     * in all other Amazon Web Services Regions to the aggregator index. This lets
     * search results in the Region with the aggregator index to include resources from
     * all Regions in the account where Resource Explorer is turned on.</p> </li> </ul>
     */
    inline MemberIndex& WithType(const IndexType& value) { SetType(value); return *this;}

    /**
     * <p>The type of index. It can be one of the following values: </p> <ul> <li> <p>
     * <code>LOCAL</code> – The index contains information about resources from only
     * the same Amazon Web Services Region.</p> </li> <li> <p> <code>AGGREGATOR</code>
     * – Resource Explorer replicates copies of the indexed information about resources
     * in all other Amazon Web Services Regions to the aggregator index. This lets
     * search results in the Region with the aggregator index to include resources from
     * all Regions in the account where Resource Explorer is turned on.</p> </li> </ul>
     */
    inline MemberIndex& WithType(IndexType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

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
