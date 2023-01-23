/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/PIRequest.h>
#include <aws/pi/model/ServiceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace PI
{
namespace Model
{

  /**
   */
  class GetDimensionKeyDetailsRequest : public PIRequest
  {
  public:
    AWS_PI_API GetDimensionKeyDetailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDimensionKeyDetails"; }

    AWS_PI_API Aws::String SerializePayload() const override;

    AWS_PI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Web Services service for which Performance Insights returns data.
     * The only valid value is <code>RDS</code>.</p>
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns data.
     * The only valid value is <code>RDS</code>.</p>
     */
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns data.
     * The only valid value is <code>RDS</code>.</p>
     */
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns data.
     * The only valid value is <code>RDS</code>.</p>
     */
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns data.
     * The only valid value is <code>RDS</code>.</p>
     */
    inline GetDimensionKeyDetailsRequest& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns data.
     * The only valid value is <code>RDS</code>.</p>
     */
    inline GetDimensionKeyDetailsRequest& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}


    /**
     * <p>The ID for a data source from which to gather dimension data. This ID must be
     * immutable and unique within an Amazon Web Services Region. When a DB instance is
     * the data source, specify its <code>DbiResourceId</code> value. For example,
     * specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The ID for a data source from which to gather dimension data. This ID must be
     * immutable and unique within an Amazon Web Services Region. When a DB instance is
     * the data source, specify its <code>DbiResourceId</code> value. For example,
     * specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The ID for a data source from which to gather dimension data. This ID must be
     * immutable and unique within an Amazon Web Services Region. When a DB instance is
     * the data source, specify its <code>DbiResourceId</code> value. For example,
     * specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The ID for a data source from which to gather dimension data. This ID must be
     * immutable and unique within an Amazon Web Services Region. When a DB instance is
     * the data source, specify its <code>DbiResourceId</code> value. For example,
     * specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The ID for a data source from which to gather dimension data. This ID must be
     * immutable and unique within an Amazon Web Services Region. When a DB instance is
     * the data source, specify its <code>DbiResourceId</code> value. For example,
     * specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The ID for a data source from which to gather dimension data. This ID must be
     * immutable and unique within an Amazon Web Services Region. When a DB instance is
     * the data source, specify its <code>DbiResourceId</code> value. For example,
     * specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline GetDimensionKeyDetailsRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The ID for a data source from which to gather dimension data. This ID must be
     * immutable and unique within an Amazon Web Services Region. When a DB instance is
     * the data source, specify its <code>DbiResourceId</code> value. For example,
     * specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline GetDimensionKeyDetailsRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID for a data source from which to gather dimension data. This ID must be
     * immutable and unique within an Amazon Web Services Region. When a DB instance is
     * the data source, specify its <code>DbiResourceId</code> value. For example,
     * specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline GetDimensionKeyDetailsRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The name of the dimension group. Performance Insights searches the specified
     * group for the dimension group ID. The following group name values are valid:</p>
     * <ul> <li> <p> <code>db.query</code> (Amazon DocumentDB only)</p> </li> <li> <p>
     * <code>db.sql</code> (Amazon RDS and Aurora only)</p> </li> </ul>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>The name of the dimension group. Performance Insights searches the specified
     * group for the dimension group ID. The following group name values are valid:</p>
     * <ul> <li> <p> <code>db.query</code> (Amazon DocumentDB only)</p> </li> <li> <p>
     * <code>db.sql</code> (Amazon RDS and Aurora only)</p> </li> </ul>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The name of the dimension group. Performance Insights searches the specified
     * group for the dimension group ID. The following group name values are valid:</p>
     * <ul> <li> <p> <code>db.query</code> (Amazon DocumentDB only)</p> </li> <li> <p>
     * <code>db.sql</code> (Amazon RDS and Aurora only)</p> </li> </ul>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name of the dimension group. Performance Insights searches the specified
     * group for the dimension group ID. The following group name values are valid:</p>
     * <ul> <li> <p> <code>db.query</code> (Amazon DocumentDB only)</p> </li> <li> <p>
     * <code>db.sql</code> (Amazon RDS and Aurora only)</p> </li> </ul>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The name of the dimension group. Performance Insights searches the specified
     * group for the dimension group ID. The following group name values are valid:</p>
     * <ul> <li> <p> <code>db.query</code> (Amazon DocumentDB only)</p> </li> <li> <p>
     * <code>db.sql</code> (Amazon RDS and Aurora only)</p> </li> </ul>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>The name of the dimension group. Performance Insights searches the specified
     * group for the dimension group ID. The following group name values are valid:</p>
     * <ul> <li> <p> <code>db.query</code> (Amazon DocumentDB only)</p> </li> <li> <p>
     * <code>db.sql</code> (Amazon RDS and Aurora only)</p> </li> </ul>
     */
    inline GetDimensionKeyDetailsRequest& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>The name of the dimension group. Performance Insights searches the specified
     * group for the dimension group ID. The following group name values are valid:</p>
     * <ul> <li> <p> <code>db.query</code> (Amazon DocumentDB only)</p> </li> <li> <p>
     * <code>db.sql</code> (Amazon RDS and Aurora only)</p> </li> </ul>
     */
    inline GetDimensionKeyDetailsRequest& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the dimension group. Performance Insights searches the specified
     * group for the dimension group ID. The following group name values are valid:</p>
     * <ul> <li> <p> <code>db.query</code> (Amazon DocumentDB only)</p> </li> <li> <p>
     * <code>db.sql</code> (Amazon RDS and Aurora only)</p> </li> </ul>
     */
    inline GetDimensionKeyDetailsRequest& WithGroup(const char* value) { SetGroup(value); return *this;}


    /**
     * <p>The ID of the dimension group from which to retrieve dimension details. For
     * dimension group <code>db.sql</code>, the group ID is <code>db.sql.id</code>. The
     * following group ID values are valid:</p> <ul> <li> <p> <code>db.sql.id</code>
     * for dimension group <code>db.sql</code> (Aurora and RDS only)</p> </li> <li> <p>
     * <code>db.query.id</code> for dimension group <code>db.query</code> (DocumentDB
     * only)</p> </li> </ul>
     */
    inline const Aws::String& GetGroupIdentifier() const{ return m_groupIdentifier; }

    /**
     * <p>The ID of the dimension group from which to retrieve dimension details. For
     * dimension group <code>db.sql</code>, the group ID is <code>db.sql.id</code>. The
     * following group ID values are valid:</p> <ul> <li> <p> <code>db.sql.id</code>
     * for dimension group <code>db.sql</code> (Aurora and RDS only)</p> </li> <li> <p>
     * <code>db.query.id</code> for dimension group <code>db.query</code> (DocumentDB
     * only)</p> </li> </ul>
     */
    inline bool GroupIdentifierHasBeenSet() const { return m_groupIdentifierHasBeenSet; }

    /**
     * <p>The ID of the dimension group from which to retrieve dimension details. For
     * dimension group <code>db.sql</code>, the group ID is <code>db.sql.id</code>. The
     * following group ID values are valid:</p> <ul> <li> <p> <code>db.sql.id</code>
     * for dimension group <code>db.sql</code> (Aurora and RDS only)</p> </li> <li> <p>
     * <code>db.query.id</code> for dimension group <code>db.query</code> (DocumentDB
     * only)</p> </li> </ul>
     */
    inline void SetGroupIdentifier(const Aws::String& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = value; }

    /**
     * <p>The ID of the dimension group from which to retrieve dimension details. For
     * dimension group <code>db.sql</code>, the group ID is <code>db.sql.id</code>. The
     * following group ID values are valid:</p> <ul> <li> <p> <code>db.sql.id</code>
     * for dimension group <code>db.sql</code> (Aurora and RDS only)</p> </li> <li> <p>
     * <code>db.query.id</code> for dimension group <code>db.query</code> (DocumentDB
     * only)</p> </li> </ul>
     */
    inline void SetGroupIdentifier(Aws::String&& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = std::move(value); }

    /**
     * <p>The ID of the dimension group from which to retrieve dimension details. For
     * dimension group <code>db.sql</code>, the group ID is <code>db.sql.id</code>. The
     * following group ID values are valid:</p> <ul> <li> <p> <code>db.sql.id</code>
     * for dimension group <code>db.sql</code> (Aurora and RDS only)</p> </li> <li> <p>
     * <code>db.query.id</code> for dimension group <code>db.query</code> (DocumentDB
     * only)</p> </li> </ul>
     */
    inline void SetGroupIdentifier(const char* value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier.assign(value); }

    /**
     * <p>The ID of the dimension group from which to retrieve dimension details. For
     * dimension group <code>db.sql</code>, the group ID is <code>db.sql.id</code>. The
     * following group ID values are valid:</p> <ul> <li> <p> <code>db.sql.id</code>
     * for dimension group <code>db.sql</code> (Aurora and RDS only)</p> </li> <li> <p>
     * <code>db.query.id</code> for dimension group <code>db.query</code> (DocumentDB
     * only)</p> </li> </ul>
     */
    inline GetDimensionKeyDetailsRequest& WithGroupIdentifier(const Aws::String& value) { SetGroupIdentifier(value); return *this;}

    /**
     * <p>The ID of the dimension group from which to retrieve dimension details. For
     * dimension group <code>db.sql</code>, the group ID is <code>db.sql.id</code>. The
     * following group ID values are valid:</p> <ul> <li> <p> <code>db.sql.id</code>
     * for dimension group <code>db.sql</code> (Aurora and RDS only)</p> </li> <li> <p>
     * <code>db.query.id</code> for dimension group <code>db.query</code> (DocumentDB
     * only)</p> </li> </ul>
     */
    inline GetDimensionKeyDetailsRequest& WithGroupIdentifier(Aws::String&& value) { SetGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the dimension group from which to retrieve dimension details. For
     * dimension group <code>db.sql</code>, the group ID is <code>db.sql.id</code>. The
     * following group ID values are valid:</p> <ul> <li> <p> <code>db.sql.id</code>
     * for dimension group <code>db.sql</code> (Aurora and RDS only)</p> </li> <li> <p>
     * <code>db.query.id</code> for dimension group <code>db.query</code> (DocumentDB
     * only)</p> </li> </ul>
     */
    inline GetDimensionKeyDetailsRequest& WithGroupIdentifier(const char* value) { SetGroupIdentifier(value); return *this;}


    /**
     * <p>A list of dimensions to retrieve the detail data for within the given
     * dimension group. If you don't specify this parameter, Performance Insights
     * returns all dimension data within the specified dimension group. Specify
     * dimension names for the following dimension groups:</p> <ul> <li> <p>
     * <code>db.sql</code> - Specify either the full dimension name
     * <code>db.sql.statement</code> or the short dimension name <code>statement</code>
     * (Aurora and RDS only).</p> </li> <li> <p> <code>db.query</code> - Specify either
     * the full dimension name <code>db.query.statement</code> or the short dimension
     * name <code>statement</code> (DocumentDB only).</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetRequestedDimensions() const{ return m_requestedDimensions; }

    /**
     * <p>A list of dimensions to retrieve the detail data for within the given
     * dimension group. If you don't specify this parameter, Performance Insights
     * returns all dimension data within the specified dimension group. Specify
     * dimension names for the following dimension groups:</p> <ul> <li> <p>
     * <code>db.sql</code> - Specify either the full dimension name
     * <code>db.sql.statement</code> or the short dimension name <code>statement</code>
     * (Aurora and RDS only).</p> </li> <li> <p> <code>db.query</code> - Specify either
     * the full dimension name <code>db.query.statement</code> or the short dimension
     * name <code>statement</code> (DocumentDB only).</p> </li> </ul>
     */
    inline bool RequestedDimensionsHasBeenSet() const { return m_requestedDimensionsHasBeenSet; }

    /**
     * <p>A list of dimensions to retrieve the detail data for within the given
     * dimension group. If you don't specify this parameter, Performance Insights
     * returns all dimension data within the specified dimension group. Specify
     * dimension names for the following dimension groups:</p> <ul> <li> <p>
     * <code>db.sql</code> - Specify either the full dimension name
     * <code>db.sql.statement</code> or the short dimension name <code>statement</code>
     * (Aurora and RDS only).</p> </li> <li> <p> <code>db.query</code> - Specify either
     * the full dimension name <code>db.query.statement</code> or the short dimension
     * name <code>statement</code> (DocumentDB only).</p> </li> </ul>
     */
    inline void SetRequestedDimensions(const Aws::Vector<Aws::String>& value) { m_requestedDimensionsHasBeenSet = true; m_requestedDimensions = value; }

    /**
     * <p>A list of dimensions to retrieve the detail data for within the given
     * dimension group. If you don't specify this parameter, Performance Insights
     * returns all dimension data within the specified dimension group. Specify
     * dimension names for the following dimension groups:</p> <ul> <li> <p>
     * <code>db.sql</code> - Specify either the full dimension name
     * <code>db.sql.statement</code> or the short dimension name <code>statement</code>
     * (Aurora and RDS only).</p> </li> <li> <p> <code>db.query</code> - Specify either
     * the full dimension name <code>db.query.statement</code> or the short dimension
     * name <code>statement</code> (DocumentDB only).</p> </li> </ul>
     */
    inline void SetRequestedDimensions(Aws::Vector<Aws::String>&& value) { m_requestedDimensionsHasBeenSet = true; m_requestedDimensions = std::move(value); }

    /**
     * <p>A list of dimensions to retrieve the detail data for within the given
     * dimension group. If you don't specify this parameter, Performance Insights
     * returns all dimension data within the specified dimension group. Specify
     * dimension names for the following dimension groups:</p> <ul> <li> <p>
     * <code>db.sql</code> - Specify either the full dimension name
     * <code>db.sql.statement</code> or the short dimension name <code>statement</code>
     * (Aurora and RDS only).</p> </li> <li> <p> <code>db.query</code> - Specify either
     * the full dimension name <code>db.query.statement</code> or the short dimension
     * name <code>statement</code> (DocumentDB only).</p> </li> </ul>
     */
    inline GetDimensionKeyDetailsRequest& WithRequestedDimensions(const Aws::Vector<Aws::String>& value) { SetRequestedDimensions(value); return *this;}

    /**
     * <p>A list of dimensions to retrieve the detail data for within the given
     * dimension group. If you don't specify this parameter, Performance Insights
     * returns all dimension data within the specified dimension group. Specify
     * dimension names for the following dimension groups:</p> <ul> <li> <p>
     * <code>db.sql</code> - Specify either the full dimension name
     * <code>db.sql.statement</code> or the short dimension name <code>statement</code>
     * (Aurora and RDS only).</p> </li> <li> <p> <code>db.query</code> - Specify either
     * the full dimension name <code>db.query.statement</code> or the short dimension
     * name <code>statement</code> (DocumentDB only).</p> </li> </ul>
     */
    inline GetDimensionKeyDetailsRequest& WithRequestedDimensions(Aws::Vector<Aws::String>&& value) { SetRequestedDimensions(std::move(value)); return *this;}

    /**
     * <p>A list of dimensions to retrieve the detail data for within the given
     * dimension group. If you don't specify this parameter, Performance Insights
     * returns all dimension data within the specified dimension group. Specify
     * dimension names for the following dimension groups:</p> <ul> <li> <p>
     * <code>db.sql</code> - Specify either the full dimension name
     * <code>db.sql.statement</code> or the short dimension name <code>statement</code>
     * (Aurora and RDS only).</p> </li> <li> <p> <code>db.query</code> - Specify either
     * the full dimension name <code>db.query.statement</code> or the short dimension
     * name <code>statement</code> (DocumentDB only).</p> </li> </ul>
     */
    inline GetDimensionKeyDetailsRequest& AddRequestedDimensions(const Aws::String& value) { m_requestedDimensionsHasBeenSet = true; m_requestedDimensions.push_back(value); return *this; }

    /**
     * <p>A list of dimensions to retrieve the detail data for within the given
     * dimension group. If you don't specify this parameter, Performance Insights
     * returns all dimension data within the specified dimension group. Specify
     * dimension names for the following dimension groups:</p> <ul> <li> <p>
     * <code>db.sql</code> - Specify either the full dimension name
     * <code>db.sql.statement</code> or the short dimension name <code>statement</code>
     * (Aurora and RDS only).</p> </li> <li> <p> <code>db.query</code> - Specify either
     * the full dimension name <code>db.query.statement</code> or the short dimension
     * name <code>statement</code> (DocumentDB only).</p> </li> </ul>
     */
    inline GetDimensionKeyDetailsRequest& AddRequestedDimensions(Aws::String&& value) { m_requestedDimensionsHasBeenSet = true; m_requestedDimensions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of dimensions to retrieve the detail data for within the given
     * dimension group. If you don't specify this parameter, Performance Insights
     * returns all dimension data within the specified dimension group. Specify
     * dimension names for the following dimension groups:</p> <ul> <li> <p>
     * <code>db.sql</code> - Specify either the full dimension name
     * <code>db.sql.statement</code> or the short dimension name <code>statement</code>
     * (Aurora and RDS only).</p> </li> <li> <p> <code>db.query</code> - Specify either
     * the full dimension name <code>db.query.statement</code> or the short dimension
     * name <code>statement</code> (DocumentDB only).</p> </li> </ul>
     */
    inline GetDimensionKeyDetailsRequest& AddRequestedDimensions(const char* value) { m_requestedDimensionsHasBeenSet = true; m_requestedDimensions.push_back(value); return *this; }

  private:

    ServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::String m_groupIdentifier;
    bool m_groupIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_requestedDimensions;
    bool m_requestedDimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
