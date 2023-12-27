/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/model/Format.h>
#include <aws/neptunedata/model/S3BucketRegion.h>
#include <aws/neptunedata/model/Mode.h>
#include <aws/neptunedata/model/Parallelism.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace neptunedata
{
namespace Model
{

  /**
   */
  class StartLoaderJobRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API StartLoaderJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartLoaderJob"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The <code>source</code> parameter accepts an S3 URI that identifies a single
     * file, multiple files, a folder, or multiple folders. Neptune loads every data
     * file in any folder that is specified.</p> <p>The URI can be in any of the
     * following formats.</p> <ul> <li> <p>
     * <code>s3://(bucket_name)/(object-key-name)</code> </p> </li> <li> <p>
     * <code>https://s3.amazonaws.com/(bucket_name)/(object-key-name)</code> </p> </li>
     * <li> <p>
     * <code>https://s3.us-east-1.amazonaws.com/(bucket_name)/(object-key-name)</code>
     * </p> </li> </ul> <p>The <code>object-key-name</code> element of the URI is
     * equivalent to the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html#API_ListObjects_RequestParameters">prefix</a>
     * parameter in an S3 <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>
     * API call. It identifies all the objects in the specified S3 bucket whose names
     * begin with that prefix. That can be a single file or folder, or multiple files
     * and/or folders.</p> <p>The specified folder or folders can contain multiple
     * vertex files and multiple edge files.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The <code>source</code> parameter accepts an S3 URI that identifies a single
     * file, multiple files, a folder, or multiple folders. Neptune loads every data
     * file in any folder that is specified.</p> <p>The URI can be in any of the
     * following formats.</p> <ul> <li> <p>
     * <code>s3://(bucket_name)/(object-key-name)</code> </p> </li> <li> <p>
     * <code>https://s3.amazonaws.com/(bucket_name)/(object-key-name)</code> </p> </li>
     * <li> <p>
     * <code>https://s3.us-east-1.amazonaws.com/(bucket_name)/(object-key-name)</code>
     * </p> </li> </ul> <p>The <code>object-key-name</code> element of the URI is
     * equivalent to the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html#API_ListObjects_RequestParameters">prefix</a>
     * parameter in an S3 <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>
     * API call. It identifies all the objects in the specified S3 bucket whose names
     * begin with that prefix. That can be a single file or folder, or multiple files
     * and/or folders.</p> <p>The specified folder or folders can contain multiple
     * vertex files and multiple edge files.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The <code>source</code> parameter accepts an S3 URI that identifies a single
     * file, multiple files, a folder, or multiple folders. Neptune loads every data
     * file in any folder that is specified.</p> <p>The URI can be in any of the
     * following formats.</p> <ul> <li> <p>
     * <code>s3://(bucket_name)/(object-key-name)</code> </p> </li> <li> <p>
     * <code>https://s3.amazonaws.com/(bucket_name)/(object-key-name)</code> </p> </li>
     * <li> <p>
     * <code>https://s3.us-east-1.amazonaws.com/(bucket_name)/(object-key-name)</code>
     * </p> </li> </ul> <p>The <code>object-key-name</code> element of the URI is
     * equivalent to the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html#API_ListObjects_RequestParameters">prefix</a>
     * parameter in an S3 <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>
     * API call. It identifies all the objects in the specified S3 bucket whose names
     * begin with that prefix. That can be a single file or folder, or multiple files
     * and/or folders.</p> <p>The specified folder or folders can contain multiple
     * vertex files and multiple edge files.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The <code>source</code> parameter accepts an S3 URI that identifies a single
     * file, multiple files, a folder, or multiple folders. Neptune loads every data
     * file in any folder that is specified.</p> <p>The URI can be in any of the
     * following formats.</p> <ul> <li> <p>
     * <code>s3://(bucket_name)/(object-key-name)</code> </p> </li> <li> <p>
     * <code>https://s3.amazonaws.com/(bucket_name)/(object-key-name)</code> </p> </li>
     * <li> <p>
     * <code>https://s3.us-east-1.amazonaws.com/(bucket_name)/(object-key-name)</code>
     * </p> </li> </ul> <p>The <code>object-key-name</code> element of the URI is
     * equivalent to the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html#API_ListObjects_RequestParameters">prefix</a>
     * parameter in an S3 <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>
     * API call. It identifies all the objects in the specified S3 bucket whose names
     * begin with that prefix. That can be a single file or folder, or multiple files
     * and/or folders.</p> <p>The specified folder or folders can contain multiple
     * vertex files and multiple edge files.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The <code>source</code> parameter accepts an S3 URI that identifies a single
     * file, multiple files, a folder, or multiple folders. Neptune loads every data
     * file in any folder that is specified.</p> <p>The URI can be in any of the
     * following formats.</p> <ul> <li> <p>
     * <code>s3://(bucket_name)/(object-key-name)</code> </p> </li> <li> <p>
     * <code>https://s3.amazonaws.com/(bucket_name)/(object-key-name)</code> </p> </li>
     * <li> <p>
     * <code>https://s3.us-east-1.amazonaws.com/(bucket_name)/(object-key-name)</code>
     * </p> </li> </ul> <p>The <code>object-key-name</code> element of the URI is
     * equivalent to the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html#API_ListObjects_RequestParameters">prefix</a>
     * parameter in an S3 <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>
     * API call. It identifies all the objects in the specified S3 bucket whose names
     * begin with that prefix. That can be a single file or folder, or multiple files
     * and/or folders.</p> <p>The specified folder or folders can contain multiple
     * vertex files and multiple edge files.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The <code>source</code> parameter accepts an S3 URI that identifies a single
     * file, multiple files, a folder, or multiple folders. Neptune loads every data
     * file in any folder that is specified.</p> <p>The URI can be in any of the
     * following formats.</p> <ul> <li> <p>
     * <code>s3://(bucket_name)/(object-key-name)</code> </p> </li> <li> <p>
     * <code>https://s3.amazonaws.com/(bucket_name)/(object-key-name)</code> </p> </li>
     * <li> <p>
     * <code>https://s3.us-east-1.amazonaws.com/(bucket_name)/(object-key-name)</code>
     * </p> </li> </ul> <p>The <code>object-key-name</code> element of the URI is
     * equivalent to the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html#API_ListObjects_RequestParameters">prefix</a>
     * parameter in an S3 <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>
     * API call. It identifies all the objects in the specified S3 bucket whose names
     * begin with that prefix. That can be a single file or folder, or multiple files
     * and/or folders.</p> <p>The specified folder or folders can contain multiple
     * vertex files and multiple edge files.</p>
     */
    inline StartLoaderJobRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The <code>source</code> parameter accepts an S3 URI that identifies a single
     * file, multiple files, a folder, or multiple folders. Neptune loads every data
     * file in any folder that is specified.</p> <p>The URI can be in any of the
     * following formats.</p> <ul> <li> <p>
     * <code>s3://(bucket_name)/(object-key-name)</code> </p> </li> <li> <p>
     * <code>https://s3.amazonaws.com/(bucket_name)/(object-key-name)</code> </p> </li>
     * <li> <p>
     * <code>https://s3.us-east-1.amazonaws.com/(bucket_name)/(object-key-name)</code>
     * </p> </li> </ul> <p>The <code>object-key-name</code> element of the URI is
     * equivalent to the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html#API_ListObjects_RequestParameters">prefix</a>
     * parameter in an S3 <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>
     * API call. It identifies all the objects in the specified S3 bucket whose names
     * begin with that prefix. That can be a single file or folder, or multiple files
     * and/or folders.</p> <p>The specified folder or folders can contain multiple
     * vertex files and multiple edge files.</p>
     */
    inline StartLoaderJobRequest& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The <code>source</code> parameter accepts an S3 URI that identifies a single
     * file, multiple files, a folder, or multiple folders. Neptune loads every data
     * file in any folder that is specified.</p> <p>The URI can be in any of the
     * following formats.</p> <ul> <li> <p>
     * <code>s3://(bucket_name)/(object-key-name)</code> </p> </li> <li> <p>
     * <code>https://s3.amazonaws.com/(bucket_name)/(object-key-name)</code> </p> </li>
     * <li> <p>
     * <code>https://s3.us-east-1.amazonaws.com/(bucket_name)/(object-key-name)</code>
     * </p> </li> </ul> <p>The <code>object-key-name</code> element of the URI is
     * equivalent to the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html#API_ListObjects_RequestParameters">prefix</a>
     * parameter in an S3 <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>
     * API call. It identifies all the objects in the specified S3 bucket whose names
     * begin with that prefix. That can be a single file or folder, or multiple files
     * and/or folders.</p> <p>The specified folder or folders can contain multiple
     * vertex files and multiple edge files.</p>
     */
    inline StartLoaderJobRequest& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The format of the data. For more information about data formats for the
     * Neptune <code>Loader</code> command, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format.html">Load
     * Data Formats</a>.</p> <p class="title"> <b>Allowed values</b> </p> <ul> <li> <p>
     * <b> <code>csv</code> </b> for the <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-gremlin.html">Gremlin
     * CSV data format</a>.</p> </li> <li> <p> <b> <code>opencypher</code> </b> for the
     * <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-opencypher.html">openCypher
     * CSV data format</a>.</p> </li> <li> <p> <b> <code>ntriples</code> </b> for the
     * <a href="https://www.w3.org/TR/n-triples/">N-Triples RDF data format</a>.</p>
     * </li> <li> <p> <b> <code>nquads</code> </b> for the <a
     * href="https://www.w3.org/TR/n-quads/">N-Quads RDF data format</a>.</p> </li>
     * <li> <p> <b> <code>rdfxml</code> </b> for the <a
     * href="https://www.w3.org/TR/rdf-syntax-grammar/">RDF\XML RDF data
     * format</a>.</p> </li> <li> <p> <b> <code>turtle</code> </b> for the <a
     * href="https://www.w3.org/TR/turtle/">Turtle RDF data format</a>.</p> </li> </ul>
     */
    inline const Format& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the data. For more information about data formats for the
     * Neptune <code>Loader</code> command, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format.html">Load
     * Data Formats</a>.</p> <p class="title"> <b>Allowed values</b> </p> <ul> <li> <p>
     * <b> <code>csv</code> </b> for the <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-gremlin.html">Gremlin
     * CSV data format</a>.</p> </li> <li> <p> <b> <code>opencypher</code> </b> for the
     * <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-opencypher.html">openCypher
     * CSV data format</a>.</p> </li> <li> <p> <b> <code>ntriples</code> </b> for the
     * <a href="https://www.w3.org/TR/n-triples/">N-Triples RDF data format</a>.</p>
     * </li> <li> <p> <b> <code>nquads</code> </b> for the <a
     * href="https://www.w3.org/TR/n-quads/">N-Quads RDF data format</a>.</p> </li>
     * <li> <p> <b> <code>rdfxml</code> </b> for the <a
     * href="https://www.w3.org/TR/rdf-syntax-grammar/">RDF\XML RDF data
     * format</a>.</p> </li> <li> <p> <b> <code>turtle</code> </b> for the <a
     * href="https://www.w3.org/TR/turtle/">Turtle RDF data format</a>.</p> </li> </ul>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the data. For more information about data formats for the
     * Neptune <code>Loader</code> command, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format.html">Load
     * Data Formats</a>.</p> <p class="title"> <b>Allowed values</b> </p> <ul> <li> <p>
     * <b> <code>csv</code> </b> for the <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-gremlin.html">Gremlin
     * CSV data format</a>.</p> </li> <li> <p> <b> <code>opencypher</code> </b> for the
     * <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-opencypher.html">openCypher
     * CSV data format</a>.</p> </li> <li> <p> <b> <code>ntriples</code> </b> for the
     * <a href="https://www.w3.org/TR/n-triples/">N-Triples RDF data format</a>.</p>
     * </li> <li> <p> <b> <code>nquads</code> </b> for the <a
     * href="https://www.w3.org/TR/n-quads/">N-Quads RDF data format</a>.</p> </li>
     * <li> <p> <b> <code>rdfxml</code> </b> for the <a
     * href="https://www.w3.org/TR/rdf-syntax-grammar/">RDF\XML RDF data
     * format</a>.</p> </li> <li> <p> <b> <code>turtle</code> </b> for the <a
     * href="https://www.w3.org/TR/turtle/">Turtle RDF data format</a>.</p> </li> </ul>
     */
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the data. For more information about data formats for the
     * Neptune <code>Loader</code> command, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format.html">Load
     * Data Formats</a>.</p> <p class="title"> <b>Allowed values</b> </p> <ul> <li> <p>
     * <b> <code>csv</code> </b> for the <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-gremlin.html">Gremlin
     * CSV data format</a>.</p> </li> <li> <p> <b> <code>opencypher</code> </b> for the
     * <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-opencypher.html">openCypher
     * CSV data format</a>.</p> </li> <li> <p> <b> <code>ntriples</code> </b> for the
     * <a href="https://www.w3.org/TR/n-triples/">N-Triples RDF data format</a>.</p>
     * </li> <li> <p> <b> <code>nquads</code> </b> for the <a
     * href="https://www.w3.org/TR/n-quads/">N-Quads RDF data format</a>.</p> </li>
     * <li> <p> <b> <code>rdfxml</code> </b> for the <a
     * href="https://www.w3.org/TR/rdf-syntax-grammar/">RDF\XML RDF data
     * format</a>.</p> </li> <li> <p> <b> <code>turtle</code> </b> for the <a
     * href="https://www.w3.org/TR/turtle/">Turtle RDF data format</a>.</p> </li> </ul>
     */
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the data. For more information about data formats for the
     * Neptune <code>Loader</code> command, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format.html">Load
     * Data Formats</a>.</p> <p class="title"> <b>Allowed values</b> </p> <ul> <li> <p>
     * <b> <code>csv</code> </b> for the <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-gremlin.html">Gremlin
     * CSV data format</a>.</p> </li> <li> <p> <b> <code>opencypher</code> </b> for the
     * <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-opencypher.html">openCypher
     * CSV data format</a>.</p> </li> <li> <p> <b> <code>ntriples</code> </b> for the
     * <a href="https://www.w3.org/TR/n-triples/">N-Triples RDF data format</a>.</p>
     * </li> <li> <p> <b> <code>nquads</code> </b> for the <a
     * href="https://www.w3.org/TR/n-quads/">N-Quads RDF data format</a>.</p> </li>
     * <li> <p> <b> <code>rdfxml</code> </b> for the <a
     * href="https://www.w3.org/TR/rdf-syntax-grammar/">RDF\XML RDF data
     * format</a>.</p> </li> <li> <p> <b> <code>turtle</code> </b> for the <a
     * href="https://www.w3.org/TR/turtle/">Turtle RDF data format</a>.</p> </li> </ul>
     */
    inline StartLoaderJobRequest& WithFormat(const Format& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the data. For more information about data formats for the
     * Neptune <code>Loader</code> command, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format.html">Load
     * Data Formats</a>.</p> <p class="title"> <b>Allowed values</b> </p> <ul> <li> <p>
     * <b> <code>csv</code> </b> for the <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-gremlin.html">Gremlin
     * CSV data format</a>.</p> </li> <li> <p> <b> <code>opencypher</code> </b> for the
     * <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-opencypher.html">openCypher
     * CSV data format</a>.</p> </li> <li> <p> <b> <code>ntriples</code> </b> for the
     * <a href="https://www.w3.org/TR/n-triples/">N-Triples RDF data format</a>.</p>
     * </li> <li> <p> <b> <code>nquads</code> </b> for the <a
     * href="https://www.w3.org/TR/n-quads/">N-Quads RDF data format</a>.</p> </li>
     * <li> <p> <b> <code>rdfxml</code> </b> for the <a
     * href="https://www.w3.org/TR/rdf-syntax-grammar/">RDF\XML RDF data
     * format</a>.</p> </li> <li> <p> <b> <code>turtle</code> </b> for the <a
     * href="https://www.w3.org/TR/turtle/">Turtle RDF data format</a>.</p> </li> </ul>
     */
    inline StartLoaderJobRequest& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The Amazon region of the S3 bucket. This must match the Amazon Region of the
     * DB cluster.</p>
     */
    inline const S3BucketRegion& GetS3BucketRegion() const{ return m_s3BucketRegion; }

    /**
     * <p>The Amazon region of the S3 bucket. This must match the Amazon Region of the
     * DB cluster.</p>
     */
    inline bool S3BucketRegionHasBeenSet() const { return m_s3BucketRegionHasBeenSet; }

    /**
     * <p>The Amazon region of the S3 bucket. This must match the Amazon Region of the
     * DB cluster.</p>
     */
    inline void SetS3BucketRegion(const S3BucketRegion& value) { m_s3BucketRegionHasBeenSet = true; m_s3BucketRegion = value; }

    /**
     * <p>The Amazon region of the S3 bucket. This must match the Amazon Region of the
     * DB cluster.</p>
     */
    inline void SetS3BucketRegion(S3BucketRegion&& value) { m_s3BucketRegionHasBeenSet = true; m_s3BucketRegion = std::move(value); }

    /**
     * <p>The Amazon region of the S3 bucket. This must match the Amazon Region of the
     * DB cluster.</p>
     */
    inline StartLoaderJobRequest& WithS3BucketRegion(const S3BucketRegion& value) { SetS3BucketRegion(value); return *this;}

    /**
     * <p>The Amazon region of the S3 bucket. This must match the Amazon Region of the
     * DB cluster.</p>
     */
    inline StartLoaderJobRequest& WithS3BucketRegion(S3BucketRegion&& value) { SetS3BucketRegion(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for an IAM role to be assumed by the Neptune
     * DB instance for access to the S3 bucket. The IAM role ARN provided here should
     * be attached to the DB cluster (see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-IAM-add-role-cluster.html">Adding
     * the IAM Role to an Amazon Neptune Cluster</a>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for an IAM role to be assumed by the Neptune
     * DB instance for access to the S3 bucket. The IAM role ARN provided here should
     * be attached to the DB cluster (see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-IAM-add-role-cluster.html">Adding
     * the IAM Role to an Amazon Neptune Cluster</a>.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for an IAM role to be assumed by the Neptune
     * DB instance for access to the S3 bucket. The IAM role ARN provided here should
     * be attached to the DB cluster (see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-IAM-add-role-cluster.html">Adding
     * the IAM Role to an Amazon Neptune Cluster</a>.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for an IAM role to be assumed by the Neptune
     * DB instance for access to the S3 bucket. The IAM role ARN provided here should
     * be attached to the DB cluster (see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-IAM-add-role-cluster.html">Adding
     * the IAM Role to an Amazon Neptune Cluster</a>.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for an IAM role to be assumed by the Neptune
     * DB instance for access to the S3 bucket. The IAM role ARN provided here should
     * be attached to the DB cluster (see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-IAM-add-role-cluster.html">Adding
     * the IAM Role to an Amazon Neptune Cluster</a>.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for an IAM role to be assumed by the Neptune
     * DB instance for access to the S3 bucket. The IAM role ARN provided here should
     * be attached to the DB cluster (see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-IAM-add-role-cluster.html">Adding
     * the IAM Role to an Amazon Neptune Cluster</a>.</p>
     */
    inline StartLoaderJobRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for an IAM role to be assumed by the Neptune
     * DB instance for access to the S3 bucket. The IAM role ARN provided here should
     * be attached to the DB cluster (see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-IAM-add-role-cluster.html">Adding
     * the IAM Role to an Amazon Neptune Cluster</a>.</p>
     */
    inline StartLoaderJobRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for an IAM role to be assumed by the Neptune
     * DB instance for access to the S3 bucket. The IAM role ARN provided here should
     * be attached to the DB cluster (see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-IAM-add-role-cluster.html">Adding
     * the IAM Role to an Amazon Neptune Cluster</a>.</p>
     */
    inline StartLoaderJobRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>The load job mode.</p> <p> <i>Allowed values</i>: <code>RESUME</code>,
     * <code>NEW</code>, <code>AUTO</code>.</p> <p> <i>Default value</i>:
     * <code>AUTO</code>.</p> <p class="title"> <b/> </p> <ul> <li> <p>
     * <code>RESUME</code>   –   In RESUME mode, the loader looks for a previous load
     * from this source, and if it finds one, resumes that load job. If no previous
     * load job is found, the loader stops.</p> <p>The loader avoids reloading files
     * that were successfully loaded in a previous job. It only tries to process failed
     * files. If you dropped previously loaded data from your Neptune cluster, that
     * data is not reloaded in this mode. If a previous load job loaded all files from
     * the same source successfully, nothing is reloaded, and the loader returns
     * success.</p> </li> <li> <p> <code>NEW</code>   –   In NEW mode, the creates a
     * new load request regardless of any previous loads. You can use this mode to
     * reload all the data from a source after dropping previously loaded data from
     * your Neptune cluster, or to load new data available at the same source.</p>
     * </li> <li> <p> <code>AUTO</code>   –   In AUTO mode, the loader looks for a
     * previous load job from the same source, and if it finds one, resumes that job,
     * just as in <code>RESUME</code> mode.</p> <p>If the loader doesn't find a
     * previous load job from the same source, it loads all data from the source, just
     * as in <code>NEW</code> mode.</p> </li> </ul>
     */
    inline const Mode& GetMode() const{ return m_mode; }

    /**
     * <p>The load job mode.</p> <p> <i>Allowed values</i>: <code>RESUME</code>,
     * <code>NEW</code>, <code>AUTO</code>.</p> <p> <i>Default value</i>:
     * <code>AUTO</code>.</p> <p class="title"> <b/> </p> <ul> <li> <p>
     * <code>RESUME</code>   –   In RESUME mode, the loader looks for a previous load
     * from this source, and if it finds one, resumes that load job. If no previous
     * load job is found, the loader stops.</p> <p>The loader avoids reloading files
     * that were successfully loaded in a previous job. It only tries to process failed
     * files. If you dropped previously loaded data from your Neptune cluster, that
     * data is not reloaded in this mode. If a previous load job loaded all files from
     * the same source successfully, nothing is reloaded, and the loader returns
     * success.</p> </li> <li> <p> <code>NEW</code>   –   In NEW mode, the creates a
     * new load request regardless of any previous loads. You can use this mode to
     * reload all the data from a source after dropping previously loaded data from
     * your Neptune cluster, or to load new data available at the same source.</p>
     * </li> <li> <p> <code>AUTO</code>   –   In AUTO mode, the loader looks for a
     * previous load job from the same source, and if it finds one, resumes that job,
     * just as in <code>RESUME</code> mode.</p> <p>If the loader doesn't find a
     * previous load job from the same source, it loads all data from the source, just
     * as in <code>NEW</code> mode.</p> </li> </ul>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The load job mode.</p> <p> <i>Allowed values</i>: <code>RESUME</code>,
     * <code>NEW</code>, <code>AUTO</code>.</p> <p> <i>Default value</i>:
     * <code>AUTO</code>.</p> <p class="title"> <b/> </p> <ul> <li> <p>
     * <code>RESUME</code>   –   In RESUME mode, the loader looks for a previous load
     * from this source, and if it finds one, resumes that load job. If no previous
     * load job is found, the loader stops.</p> <p>The loader avoids reloading files
     * that were successfully loaded in a previous job. It only tries to process failed
     * files. If you dropped previously loaded data from your Neptune cluster, that
     * data is not reloaded in this mode. If a previous load job loaded all files from
     * the same source successfully, nothing is reloaded, and the loader returns
     * success.</p> </li> <li> <p> <code>NEW</code>   –   In NEW mode, the creates a
     * new load request regardless of any previous loads. You can use this mode to
     * reload all the data from a source after dropping previously loaded data from
     * your Neptune cluster, or to load new data available at the same source.</p>
     * </li> <li> <p> <code>AUTO</code>   –   In AUTO mode, the loader looks for a
     * previous load job from the same source, and if it finds one, resumes that job,
     * just as in <code>RESUME</code> mode.</p> <p>If the loader doesn't find a
     * previous load job from the same source, it loads all data from the source, just
     * as in <code>NEW</code> mode.</p> </li> </ul>
     */
    inline void SetMode(const Mode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The load job mode.</p> <p> <i>Allowed values</i>: <code>RESUME</code>,
     * <code>NEW</code>, <code>AUTO</code>.</p> <p> <i>Default value</i>:
     * <code>AUTO</code>.</p> <p class="title"> <b/> </p> <ul> <li> <p>
     * <code>RESUME</code>   –   In RESUME mode, the loader looks for a previous load
     * from this source, and if it finds one, resumes that load job. If no previous
     * load job is found, the loader stops.</p> <p>The loader avoids reloading files
     * that were successfully loaded in a previous job. It only tries to process failed
     * files. If you dropped previously loaded data from your Neptune cluster, that
     * data is not reloaded in this mode. If a previous load job loaded all files from
     * the same source successfully, nothing is reloaded, and the loader returns
     * success.</p> </li> <li> <p> <code>NEW</code>   –   In NEW mode, the creates a
     * new load request regardless of any previous loads. You can use this mode to
     * reload all the data from a source after dropping previously loaded data from
     * your Neptune cluster, or to load new data available at the same source.</p>
     * </li> <li> <p> <code>AUTO</code>   –   In AUTO mode, the loader looks for a
     * previous load job from the same source, and if it finds one, resumes that job,
     * just as in <code>RESUME</code> mode.</p> <p>If the loader doesn't find a
     * previous load job from the same source, it loads all data from the source, just
     * as in <code>NEW</code> mode.</p> </li> </ul>
     */
    inline void SetMode(Mode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The load job mode.</p> <p> <i>Allowed values</i>: <code>RESUME</code>,
     * <code>NEW</code>, <code>AUTO</code>.</p> <p> <i>Default value</i>:
     * <code>AUTO</code>.</p> <p class="title"> <b/> </p> <ul> <li> <p>
     * <code>RESUME</code>   –   In RESUME mode, the loader looks for a previous load
     * from this source, and if it finds one, resumes that load job. If no previous
     * load job is found, the loader stops.</p> <p>The loader avoids reloading files
     * that were successfully loaded in a previous job. It only tries to process failed
     * files. If you dropped previously loaded data from your Neptune cluster, that
     * data is not reloaded in this mode. If a previous load job loaded all files from
     * the same source successfully, nothing is reloaded, and the loader returns
     * success.</p> </li> <li> <p> <code>NEW</code>   –   In NEW mode, the creates a
     * new load request regardless of any previous loads. You can use this mode to
     * reload all the data from a source after dropping previously loaded data from
     * your Neptune cluster, or to load new data available at the same source.</p>
     * </li> <li> <p> <code>AUTO</code>   –   In AUTO mode, the loader looks for a
     * previous load job from the same source, and if it finds one, resumes that job,
     * just as in <code>RESUME</code> mode.</p> <p>If the loader doesn't find a
     * previous load job from the same source, it loads all data from the source, just
     * as in <code>NEW</code> mode.</p> </li> </ul>
     */
    inline StartLoaderJobRequest& WithMode(const Mode& value) { SetMode(value); return *this;}

    /**
     * <p>The load job mode.</p> <p> <i>Allowed values</i>: <code>RESUME</code>,
     * <code>NEW</code>, <code>AUTO</code>.</p> <p> <i>Default value</i>:
     * <code>AUTO</code>.</p> <p class="title"> <b/> </p> <ul> <li> <p>
     * <code>RESUME</code>   –   In RESUME mode, the loader looks for a previous load
     * from this source, and if it finds one, resumes that load job. If no previous
     * load job is found, the loader stops.</p> <p>The loader avoids reloading files
     * that were successfully loaded in a previous job. It only tries to process failed
     * files. If you dropped previously loaded data from your Neptune cluster, that
     * data is not reloaded in this mode. If a previous load job loaded all files from
     * the same source successfully, nothing is reloaded, and the loader returns
     * success.</p> </li> <li> <p> <code>NEW</code>   –   In NEW mode, the creates a
     * new load request regardless of any previous loads. You can use this mode to
     * reload all the data from a source after dropping previously loaded data from
     * your Neptune cluster, or to load new data available at the same source.</p>
     * </li> <li> <p> <code>AUTO</code>   –   In AUTO mode, the loader looks for a
     * previous load job from the same source, and if it finds one, resumes that job,
     * just as in <code>RESUME</code> mode.</p> <p>If the loader doesn't find a
     * previous load job from the same source, it loads all data from the source, just
     * as in <code>NEW</code> mode.</p> </li> </ul>
     */
    inline StartLoaderJobRequest& WithMode(Mode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p> <b> <code>failOnError</code> </b>   –   A flag to toggle a complete stop on
     * an error.</p> <p> <i>Allowed values</i>: <code>"TRUE"</code>,
     * <code>"FALSE"</code>.</p> <p> <i>Default value</i>: <code>"TRUE"</code>.</p>
     * <p>When this parameter is set to <code>"FALSE"</code>, the loader tries to load
     * all the data in the location specified, skipping any entries with errors.</p>
     * <p>When this parameter is set to <code>"TRUE"</code>, the loader stops as soon
     * as it encounters an error. Data loaded up to that point persists.</p>
     */
    inline bool GetFailOnError() const{ return m_failOnError; }

    /**
     * <p> <b> <code>failOnError</code> </b>   –   A flag to toggle a complete stop on
     * an error.</p> <p> <i>Allowed values</i>: <code>"TRUE"</code>,
     * <code>"FALSE"</code>.</p> <p> <i>Default value</i>: <code>"TRUE"</code>.</p>
     * <p>When this parameter is set to <code>"FALSE"</code>, the loader tries to load
     * all the data in the location specified, skipping any entries with errors.</p>
     * <p>When this parameter is set to <code>"TRUE"</code>, the loader stops as soon
     * as it encounters an error. Data loaded up to that point persists.</p>
     */
    inline bool FailOnErrorHasBeenSet() const { return m_failOnErrorHasBeenSet; }

    /**
     * <p> <b> <code>failOnError</code> </b>   –   A flag to toggle a complete stop on
     * an error.</p> <p> <i>Allowed values</i>: <code>"TRUE"</code>,
     * <code>"FALSE"</code>.</p> <p> <i>Default value</i>: <code>"TRUE"</code>.</p>
     * <p>When this parameter is set to <code>"FALSE"</code>, the loader tries to load
     * all the data in the location specified, skipping any entries with errors.</p>
     * <p>When this parameter is set to <code>"TRUE"</code>, the loader stops as soon
     * as it encounters an error. Data loaded up to that point persists.</p>
     */
    inline void SetFailOnError(bool value) { m_failOnErrorHasBeenSet = true; m_failOnError = value; }

    /**
     * <p> <b> <code>failOnError</code> </b>   –   A flag to toggle a complete stop on
     * an error.</p> <p> <i>Allowed values</i>: <code>"TRUE"</code>,
     * <code>"FALSE"</code>.</p> <p> <i>Default value</i>: <code>"TRUE"</code>.</p>
     * <p>When this parameter is set to <code>"FALSE"</code>, the loader tries to load
     * all the data in the location specified, skipping any entries with errors.</p>
     * <p>When this parameter is set to <code>"TRUE"</code>, the loader stops as soon
     * as it encounters an error. Data loaded up to that point persists.</p>
     */
    inline StartLoaderJobRequest& WithFailOnError(bool value) { SetFailOnError(value); return *this;}


    /**
     * <p>The optional <code>parallelism</code> parameter can be set to reduce the
     * number of threads used by the bulk load process.</p> <p> <i>Allowed
     * values</i>:</p> <ul> <li> <p> <code>LOW</code> –   The number of threads used is
     * the number of available vCPUs divided by 8.</p> </li> <li> <p>
     * <code>MEDIUM</code> –   The number of threads used is the number of available
     * vCPUs divided by 2.</p> </li> <li> <p> <code>HIGH</code> –   The number of
     * threads used is the same as the number of available vCPUs.</p> </li> <li> <p>
     * <code>OVERSUBSCRIBE</code> –   The number of threads used is the number of
     * available vCPUs multiplied by 2. If this value is used, the bulk loader takes up
     * all available resources.</p> <p>This does not mean, however, that the
     * <code>OVERSUBSCRIBE</code> setting results in 100% CPU utilization. Because the
     * load operation is I/O bound, the highest CPU utilization to expect is in the 60%
     * to 70% range.</p> </li> </ul> <p> <i>Default value</i>: <code>HIGH</code> </p>
     * <p>The <code>parallelism</code> setting can sometimes result in a deadlock
     * between threads when loading openCypher data. When this happens, Neptune returns
     * the <code>LOAD_DATA_DEADLOCK</code> error. You can generally fix the issue by
     * setting <code>parallelism</code> to a lower setting and retrying the load
     * command.</p>
     */
    inline const Parallelism& GetParallelism() const{ return m_parallelism; }

    /**
     * <p>The optional <code>parallelism</code> parameter can be set to reduce the
     * number of threads used by the bulk load process.</p> <p> <i>Allowed
     * values</i>:</p> <ul> <li> <p> <code>LOW</code> –   The number of threads used is
     * the number of available vCPUs divided by 8.</p> </li> <li> <p>
     * <code>MEDIUM</code> –   The number of threads used is the number of available
     * vCPUs divided by 2.</p> </li> <li> <p> <code>HIGH</code> –   The number of
     * threads used is the same as the number of available vCPUs.</p> </li> <li> <p>
     * <code>OVERSUBSCRIBE</code> –   The number of threads used is the number of
     * available vCPUs multiplied by 2. If this value is used, the bulk loader takes up
     * all available resources.</p> <p>This does not mean, however, that the
     * <code>OVERSUBSCRIBE</code> setting results in 100% CPU utilization. Because the
     * load operation is I/O bound, the highest CPU utilization to expect is in the 60%
     * to 70% range.</p> </li> </ul> <p> <i>Default value</i>: <code>HIGH</code> </p>
     * <p>The <code>parallelism</code> setting can sometimes result in a deadlock
     * between threads when loading openCypher data. When this happens, Neptune returns
     * the <code>LOAD_DATA_DEADLOCK</code> error. You can generally fix the issue by
     * setting <code>parallelism</code> to a lower setting and retrying the load
     * command.</p>
     */
    inline bool ParallelismHasBeenSet() const { return m_parallelismHasBeenSet; }

    /**
     * <p>The optional <code>parallelism</code> parameter can be set to reduce the
     * number of threads used by the bulk load process.</p> <p> <i>Allowed
     * values</i>:</p> <ul> <li> <p> <code>LOW</code> –   The number of threads used is
     * the number of available vCPUs divided by 8.</p> </li> <li> <p>
     * <code>MEDIUM</code> –   The number of threads used is the number of available
     * vCPUs divided by 2.</p> </li> <li> <p> <code>HIGH</code> –   The number of
     * threads used is the same as the number of available vCPUs.</p> </li> <li> <p>
     * <code>OVERSUBSCRIBE</code> –   The number of threads used is the number of
     * available vCPUs multiplied by 2. If this value is used, the bulk loader takes up
     * all available resources.</p> <p>This does not mean, however, that the
     * <code>OVERSUBSCRIBE</code> setting results in 100% CPU utilization. Because the
     * load operation is I/O bound, the highest CPU utilization to expect is in the 60%
     * to 70% range.</p> </li> </ul> <p> <i>Default value</i>: <code>HIGH</code> </p>
     * <p>The <code>parallelism</code> setting can sometimes result in a deadlock
     * between threads when loading openCypher data. When this happens, Neptune returns
     * the <code>LOAD_DATA_DEADLOCK</code> error. You can generally fix the issue by
     * setting <code>parallelism</code> to a lower setting and retrying the load
     * command.</p>
     */
    inline void SetParallelism(const Parallelism& value) { m_parallelismHasBeenSet = true; m_parallelism = value; }

    /**
     * <p>The optional <code>parallelism</code> parameter can be set to reduce the
     * number of threads used by the bulk load process.</p> <p> <i>Allowed
     * values</i>:</p> <ul> <li> <p> <code>LOW</code> –   The number of threads used is
     * the number of available vCPUs divided by 8.</p> </li> <li> <p>
     * <code>MEDIUM</code> –   The number of threads used is the number of available
     * vCPUs divided by 2.</p> </li> <li> <p> <code>HIGH</code> –   The number of
     * threads used is the same as the number of available vCPUs.</p> </li> <li> <p>
     * <code>OVERSUBSCRIBE</code> –   The number of threads used is the number of
     * available vCPUs multiplied by 2. If this value is used, the bulk loader takes up
     * all available resources.</p> <p>This does not mean, however, that the
     * <code>OVERSUBSCRIBE</code> setting results in 100% CPU utilization. Because the
     * load operation is I/O bound, the highest CPU utilization to expect is in the 60%
     * to 70% range.</p> </li> </ul> <p> <i>Default value</i>: <code>HIGH</code> </p>
     * <p>The <code>parallelism</code> setting can sometimes result in a deadlock
     * between threads when loading openCypher data. When this happens, Neptune returns
     * the <code>LOAD_DATA_DEADLOCK</code> error. You can generally fix the issue by
     * setting <code>parallelism</code> to a lower setting and retrying the load
     * command.</p>
     */
    inline void SetParallelism(Parallelism&& value) { m_parallelismHasBeenSet = true; m_parallelism = std::move(value); }

    /**
     * <p>The optional <code>parallelism</code> parameter can be set to reduce the
     * number of threads used by the bulk load process.</p> <p> <i>Allowed
     * values</i>:</p> <ul> <li> <p> <code>LOW</code> –   The number of threads used is
     * the number of available vCPUs divided by 8.</p> </li> <li> <p>
     * <code>MEDIUM</code> –   The number of threads used is the number of available
     * vCPUs divided by 2.</p> </li> <li> <p> <code>HIGH</code> –   The number of
     * threads used is the same as the number of available vCPUs.</p> </li> <li> <p>
     * <code>OVERSUBSCRIBE</code> –   The number of threads used is the number of
     * available vCPUs multiplied by 2. If this value is used, the bulk loader takes up
     * all available resources.</p> <p>This does not mean, however, that the
     * <code>OVERSUBSCRIBE</code> setting results in 100% CPU utilization. Because the
     * load operation is I/O bound, the highest CPU utilization to expect is in the 60%
     * to 70% range.</p> </li> </ul> <p> <i>Default value</i>: <code>HIGH</code> </p>
     * <p>The <code>parallelism</code> setting can sometimes result in a deadlock
     * between threads when loading openCypher data. When this happens, Neptune returns
     * the <code>LOAD_DATA_DEADLOCK</code> error. You can generally fix the issue by
     * setting <code>parallelism</code> to a lower setting and retrying the load
     * command.</p>
     */
    inline StartLoaderJobRequest& WithParallelism(const Parallelism& value) { SetParallelism(value); return *this;}

    /**
     * <p>The optional <code>parallelism</code> parameter can be set to reduce the
     * number of threads used by the bulk load process.</p> <p> <i>Allowed
     * values</i>:</p> <ul> <li> <p> <code>LOW</code> –   The number of threads used is
     * the number of available vCPUs divided by 8.</p> </li> <li> <p>
     * <code>MEDIUM</code> –   The number of threads used is the number of available
     * vCPUs divided by 2.</p> </li> <li> <p> <code>HIGH</code> –   The number of
     * threads used is the same as the number of available vCPUs.</p> </li> <li> <p>
     * <code>OVERSUBSCRIBE</code> –   The number of threads used is the number of
     * available vCPUs multiplied by 2. If this value is used, the bulk loader takes up
     * all available resources.</p> <p>This does not mean, however, that the
     * <code>OVERSUBSCRIBE</code> setting results in 100% CPU utilization. Because the
     * load operation is I/O bound, the highest CPU utilization to expect is in the 60%
     * to 70% range.</p> </li> </ul> <p> <i>Default value</i>: <code>HIGH</code> </p>
     * <p>The <code>parallelism</code> setting can sometimes result in a deadlock
     * between threads when loading openCypher data. When this happens, Neptune returns
     * the <code>LOAD_DATA_DEADLOCK</code> error. You can generally fix the issue by
     * setting <code>parallelism</code> to a lower setting and retrying the load
     * command.</p>
     */
    inline StartLoaderJobRequest& WithParallelism(Parallelism&& value) { SetParallelism(std::move(value)); return *this;}


    /**
     * <p> <b> <code>parserConfiguration</code> </b>   –   An optional object with
     * additional parser configuration values. Each of the child parameters is also
     * optional:</p> <p class="title"> <b/> </p> <ul> <li> <p> <b>
     * <code>namedGraphUri</code> </b>   –   The default graph for all RDF formats when
     * no graph is specified (for non-quads formats and NQUAD entries with no
     * graph).</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/vocab/v01/DefaultNamedGraph</code>.</p>
     * </li> <li> <p> <b> <code>baseUri</code> </b>   –   The base URI for RDF/XML and
     * Turtle formats.</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/default</code>.</p> </li> <li> <p> <b>
     * <code>allowEmptyStrings</code> </b>   –   Gremlin users need to be able to pass
     * empty string values("") as node and edge properties when loading CSV data. If
     * <code>allowEmptyStrings</code> is set to <code>false</code> (the default), such
     * empty strings are treated as nulls and are not loaded.</p> <p>If
     * <code>allowEmptyStrings</code> is set to <code>true</code>, the loader treats
     * empty strings as valid property values and loads them accordingly.</p> </li>
     * </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParserConfiguration() const{ return m_parserConfiguration; }

    /**
     * <p> <b> <code>parserConfiguration</code> </b>   –   An optional object with
     * additional parser configuration values. Each of the child parameters is also
     * optional:</p> <p class="title"> <b/> </p> <ul> <li> <p> <b>
     * <code>namedGraphUri</code> </b>   –   The default graph for all RDF formats when
     * no graph is specified (for non-quads formats and NQUAD entries with no
     * graph).</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/vocab/v01/DefaultNamedGraph</code>.</p>
     * </li> <li> <p> <b> <code>baseUri</code> </b>   –   The base URI for RDF/XML and
     * Turtle formats.</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/default</code>.</p> </li> <li> <p> <b>
     * <code>allowEmptyStrings</code> </b>   –   Gremlin users need to be able to pass
     * empty string values("") as node and edge properties when loading CSV data. If
     * <code>allowEmptyStrings</code> is set to <code>false</code> (the default), such
     * empty strings are treated as nulls and are not loaded.</p> <p>If
     * <code>allowEmptyStrings</code> is set to <code>true</code>, the loader treats
     * empty strings as valid property values and loads them accordingly.</p> </li>
     * </ul>
     */
    inline bool ParserConfigurationHasBeenSet() const { return m_parserConfigurationHasBeenSet; }

    /**
     * <p> <b> <code>parserConfiguration</code> </b>   –   An optional object with
     * additional parser configuration values. Each of the child parameters is also
     * optional:</p> <p class="title"> <b/> </p> <ul> <li> <p> <b>
     * <code>namedGraphUri</code> </b>   –   The default graph for all RDF formats when
     * no graph is specified (for non-quads formats and NQUAD entries with no
     * graph).</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/vocab/v01/DefaultNamedGraph</code>.</p>
     * </li> <li> <p> <b> <code>baseUri</code> </b>   –   The base URI for RDF/XML and
     * Turtle formats.</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/default</code>.</p> </li> <li> <p> <b>
     * <code>allowEmptyStrings</code> </b>   –   Gremlin users need to be able to pass
     * empty string values("") as node and edge properties when loading CSV data. If
     * <code>allowEmptyStrings</code> is set to <code>false</code> (the default), such
     * empty strings are treated as nulls and are not loaded.</p> <p>If
     * <code>allowEmptyStrings</code> is set to <code>true</code>, the loader treats
     * empty strings as valid property values and loads them accordingly.</p> </li>
     * </ul>
     */
    inline void SetParserConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_parserConfigurationHasBeenSet = true; m_parserConfiguration = value; }

    /**
     * <p> <b> <code>parserConfiguration</code> </b>   –   An optional object with
     * additional parser configuration values. Each of the child parameters is also
     * optional:</p> <p class="title"> <b/> </p> <ul> <li> <p> <b>
     * <code>namedGraphUri</code> </b>   –   The default graph for all RDF formats when
     * no graph is specified (for non-quads formats and NQUAD entries with no
     * graph).</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/vocab/v01/DefaultNamedGraph</code>.</p>
     * </li> <li> <p> <b> <code>baseUri</code> </b>   –   The base URI for RDF/XML and
     * Turtle formats.</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/default</code>.</p> </li> <li> <p> <b>
     * <code>allowEmptyStrings</code> </b>   –   Gremlin users need to be able to pass
     * empty string values("") as node and edge properties when loading CSV data. If
     * <code>allowEmptyStrings</code> is set to <code>false</code> (the default), such
     * empty strings are treated as nulls and are not loaded.</p> <p>If
     * <code>allowEmptyStrings</code> is set to <code>true</code>, the loader treats
     * empty strings as valid property values and loads them accordingly.</p> </li>
     * </ul>
     */
    inline void SetParserConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_parserConfigurationHasBeenSet = true; m_parserConfiguration = std::move(value); }

    /**
     * <p> <b> <code>parserConfiguration</code> </b>   –   An optional object with
     * additional parser configuration values. Each of the child parameters is also
     * optional:</p> <p class="title"> <b/> </p> <ul> <li> <p> <b>
     * <code>namedGraphUri</code> </b>   –   The default graph for all RDF formats when
     * no graph is specified (for non-quads formats and NQUAD entries with no
     * graph).</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/vocab/v01/DefaultNamedGraph</code>.</p>
     * </li> <li> <p> <b> <code>baseUri</code> </b>   –   The base URI for RDF/XML and
     * Turtle formats.</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/default</code>.</p> </li> <li> <p> <b>
     * <code>allowEmptyStrings</code> </b>   –   Gremlin users need to be able to pass
     * empty string values("") as node and edge properties when loading CSV data. If
     * <code>allowEmptyStrings</code> is set to <code>false</code> (the default), such
     * empty strings are treated as nulls and are not loaded.</p> <p>If
     * <code>allowEmptyStrings</code> is set to <code>true</code>, the loader treats
     * empty strings as valid property values and loads them accordingly.</p> </li>
     * </ul>
     */
    inline StartLoaderJobRequest& WithParserConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetParserConfiguration(value); return *this;}

    /**
     * <p> <b> <code>parserConfiguration</code> </b>   –   An optional object with
     * additional parser configuration values. Each of the child parameters is also
     * optional:</p> <p class="title"> <b/> </p> <ul> <li> <p> <b>
     * <code>namedGraphUri</code> </b>   –   The default graph for all RDF formats when
     * no graph is specified (for non-quads formats and NQUAD entries with no
     * graph).</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/vocab/v01/DefaultNamedGraph</code>.</p>
     * </li> <li> <p> <b> <code>baseUri</code> </b>   –   The base URI for RDF/XML and
     * Turtle formats.</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/default</code>.</p> </li> <li> <p> <b>
     * <code>allowEmptyStrings</code> </b>   –   Gremlin users need to be able to pass
     * empty string values("") as node and edge properties when loading CSV data. If
     * <code>allowEmptyStrings</code> is set to <code>false</code> (the default), such
     * empty strings are treated as nulls and are not loaded.</p> <p>If
     * <code>allowEmptyStrings</code> is set to <code>true</code>, the loader treats
     * empty strings as valid property values and loads them accordingly.</p> </li>
     * </ul>
     */
    inline StartLoaderJobRequest& WithParserConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetParserConfiguration(std::move(value)); return *this;}

    /**
     * <p> <b> <code>parserConfiguration</code> </b>   –   An optional object with
     * additional parser configuration values. Each of the child parameters is also
     * optional:</p> <p class="title"> <b/> </p> <ul> <li> <p> <b>
     * <code>namedGraphUri</code> </b>   –   The default graph for all RDF formats when
     * no graph is specified (for non-quads formats and NQUAD entries with no
     * graph).</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/vocab/v01/DefaultNamedGraph</code>.</p>
     * </li> <li> <p> <b> <code>baseUri</code> </b>   –   The base URI for RDF/XML and
     * Turtle formats.</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/default</code>.</p> </li> <li> <p> <b>
     * <code>allowEmptyStrings</code> </b>   –   Gremlin users need to be able to pass
     * empty string values("") as node and edge properties when loading CSV data. If
     * <code>allowEmptyStrings</code> is set to <code>false</code> (the default), such
     * empty strings are treated as nulls and are not loaded.</p> <p>If
     * <code>allowEmptyStrings</code> is set to <code>true</code>, the loader treats
     * empty strings as valid property values and loads them accordingly.</p> </li>
     * </ul>
     */
    inline StartLoaderJobRequest& AddParserConfiguration(const Aws::String& key, const Aws::String& value) { m_parserConfigurationHasBeenSet = true; m_parserConfiguration.emplace(key, value); return *this; }

    /**
     * <p> <b> <code>parserConfiguration</code> </b>   –   An optional object with
     * additional parser configuration values. Each of the child parameters is also
     * optional:</p> <p class="title"> <b/> </p> <ul> <li> <p> <b>
     * <code>namedGraphUri</code> </b>   –   The default graph for all RDF formats when
     * no graph is specified (for non-quads formats and NQUAD entries with no
     * graph).</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/vocab/v01/DefaultNamedGraph</code>.</p>
     * </li> <li> <p> <b> <code>baseUri</code> </b>   –   The base URI for RDF/XML and
     * Turtle formats.</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/default</code>.</p> </li> <li> <p> <b>
     * <code>allowEmptyStrings</code> </b>   –   Gremlin users need to be able to pass
     * empty string values("") as node and edge properties when loading CSV data. If
     * <code>allowEmptyStrings</code> is set to <code>false</code> (the default), such
     * empty strings are treated as nulls and are not loaded.</p> <p>If
     * <code>allowEmptyStrings</code> is set to <code>true</code>, the loader treats
     * empty strings as valid property values and loads them accordingly.</p> </li>
     * </ul>
     */
    inline StartLoaderJobRequest& AddParserConfiguration(Aws::String&& key, const Aws::String& value) { m_parserConfigurationHasBeenSet = true; m_parserConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p> <b> <code>parserConfiguration</code> </b>   –   An optional object with
     * additional parser configuration values. Each of the child parameters is also
     * optional:</p> <p class="title"> <b/> </p> <ul> <li> <p> <b>
     * <code>namedGraphUri</code> </b>   –   The default graph for all RDF formats when
     * no graph is specified (for non-quads formats and NQUAD entries with no
     * graph).</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/vocab/v01/DefaultNamedGraph</code>.</p>
     * </li> <li> <p> <b> <code>baseUri</code> </b>   –   The base URI for RDF/XML and
     * Turtle formats.</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/default</code>.</p> </li> <li> <p> <b>
     * <code>allowEmptyStrings</code> </b>   –   Gremlin users need to be able to pass
     * empty string values("") as node and edge properties when loading CSV data. If
     * <code>allowEmptyStrings</code> is set to <code>false</code> (the default), such
     * empty strings are treated as nulls and are not loaded.</p> <p>If
     * <code>allowEmptyStrings</code> is set to <code>true</code>, the loader treats
     * empty strings as valid property values and loads them accordingly.</p> </li>
     * </ul>
     */
    inline StartLoaderJobRequest& AddParserConfiguration(const Aws::String& key, Aws::String&& value) { m_parserConfigurationHasBeenSet = true; m_parserConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p> <b> <code>parserConfiguration</code> </b>   –   An optional object with
     * additional parser configuration values. Each of the child parameters is also
     * optional:</p> <p class="title"> <b/> </p> <ul> <li> <p> <b>
     * <code>namedGraphUri</code> </b>   –   The default graph for all RDF formats when
     * no graph is specified (for non-quads formats and NQUAD entries with no
     * graph).</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/vocab/v01/DefaultNamedGraph</code>.</p>
     * </li> <li> <p> <b> <code>baseUri</code> </b>   –   The base URI for RDF/XML and
     * Turtle formats.</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/default</code>.</p> </li> <li> <p> <b>
     * <code>allowEmptyStrings</code> </b>   –   Gremlin users need to be able to pass
     * empty string values("") as node and edge properties when loading CSV data. If
     * <code>allowEmptyStrings</code> is set to <code>false</code> (the default), such
     * empty strings are treated as nulls and are not loaded.</p> <p>If
     * <code>allowEmptyStrings</code> is set to <code>true</code>, the loader treats
     * empty strings as valid property values and loads them accordingly.</p> </li>
     * </ul>
     */
    inline StartLoaderJobRequest& AddParserConfiguration(Aws::String&& key, Aws::String&& value) { m_parserConfigurationHasBeenSet = true; m_parserConfiguration.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> <b> <code>parserConfiguration</code> </b>   –   An optional object with
     * additional parser configuration values. Each of the child parameters is also
     * optional:</p> <p class="title"> <b/> </p> <ul> <li> <p> <b>
     * <code>namedGraphUri</code> </b>   –   The default graph for all RDF formats when
     * no graph is specified (for non-quads formats and NQUAD entries with no
     * graph).</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/vocab/v01/DefaultNamedGraph</code>.</p>
     * </li> <li> <p> <b> <code>baseUri</code> </b>   –   The base URI for RDF/XML and
     * Turtle formats.</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/default</code>.</p> </li> <li> <p> <b>
     * <code>allowEmptyStrings</code> </b>   –   Gremlin users need to be able to pass
     * empty string values("") as node and edge properties when loading CSV data. If
     * <code>allowEmptyStrings</code> is set to <code>false</code> (the default), such
     * empty strings are treated as nulls and are not loaded.</p> <p>If
     * <code>allowEmptyStrings</code> is set to <code>true</code>, the loader treats
     * empty strings as valid property values and loads them accordingly.</p> </li>
     * </ul>
     */
    inline StartLoaderJobRequest& AddParserConfiguration(const char* key, Aws::String&& value) { m_parserConfigurationHasBeenSet = true; m_parserConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p> <b> <code>parserConfiguration</code> </b>   –   An optional object with
     * additional parser configuration values. Each of the child parameters is also
     * optional:</p> <p class="title"> <b/> </p> <ul> <li> <p> <b>
     * <code>namedGraphUri</code> </b>   –   The default graph for all RDF formats when
     * no graph is specified (for non-quads formats and NQUAD entries with no
     * graph).</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/vocab/v01/DefaultNamedGraph</code>.</p>
     * </li> <li> <p> <b> <code>baseUri</code> </b>   –   The base URI for RDF/XML and
     * Turtle formats.</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/default</code>.</p> </li> <li> <p> <b>
     * <code>allowEmptyStrings</code> </b>   –   Gremlin users need to be able to pass
     * empty string values("") as node and edge properties when loading CSV data. If
     * <code>allowEmptyStrings</code> is set to <code>false</code> (the default), such
     * empty strings are treated as nulls and are not loaded.</p> <p>If
     * <code>allowEmptyStrings</code> is set to <code>true</code>, the loader treats
     * empty strings as valid property values and loads them accordingly.</p> </li>
     * </ul>
     */
    inline StartLoaderJobRequest& AddParserConfiguration(Aws::String&& key, const char* value) { m_parserConfigurationHasBeenSet = true; m_parserConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p> <b> <code>parserConfiguration</code> </b>   –   An optional object with
     * additional parser configuration values. Each of the child parameters is also
     * optional:</p> <p class="title"> <b/> </p> <ul> <li> <p> <b>
     * <code>namedGraphUri</code> </b>   –   The default graph for all RDF formats when
     * no graph is specified (for non-quads formats and NQUAD entries with no
     * graph).</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/vocab/v01/DefaultNamedGraph</code>.</p>
     * </li> <li> <p> <b> <code>baseUri</code> </b>   –   The base URI for RDF/XML and
     * Turtle formats.</p> <p>The default is
     * <code>https://aws.amazon.com/neptune/default</code>.</p> </li> <li> <p> <b>
     * <code>allowEmptyStrings</code> </b>   –   Gremlin users need to be able to pass
     * empty string values("") as node and edge properties when loading CSV data. If
     * <code>allowEmptyStrings</code> is set to <code>false</code> (the default), such
     * empty strings are treated as nulls and are not loaded.</p> <p>If
     * <code>allowEmptyStrings</code> is set to <code>true</code>, the loader treats
     * empty strings as valid property values and loads them accordingly.</p> </li>
     * </ul>
     */
    inline StartLoaderJobRequest& AddParserConfiguration(const char* key, const char* value) { m_parserConfigurationHasBeenSet = true; m_parserConfiguration.emplace(key, value); return *this; }


    /**
     * <p> <code>updateSingleCardinalityProperties</code> is an optional parameter that
     * controls how the bulk loader treats a new value for single-cardinality vertex or
     * edge properties. This is not supported for loading openCypher data.</p> <p>
     * <i>Allowed values</i>: <code>"TRUE"</code>, <code>"FALSE"</code>.</p> <p>
     * <i>Default value</i>: <code>"FALSE"</code>.</p> <p>By default, or when
     * <code>updateSingleCardinalityProperties</code> is explicitly set to
     * <code>"FALSE"</code>, the loader treats a new value as an error, because it
     * violates single cardinality.</p> <p>When
     * <code>updateSingleCardinalityProperties</code> is set to <code>"TRUE"</code>, on
     * the other hand, the bulk loader replaces the existing value with the new one. If
     * multiple edge or single-cardinality vertex property values are provided in the
     * source file(s) being loaded, the final value at the end of the bulk load could
     * be any one of those new values. The loader only guarantees that the existing
     * value has been replaced by one of the new ones.</p>
     */
    inline bool GetUpdateSingleCardinalityProperties() const{ return m_updateSingleCardinalityProperties; }

    /**
     * <p> <code>updateSingleCardinalityProperties</code> is an optional parameter that
     * controls how the bulk loader treats a new value for single-cardinality vertex or
     * edge properties. This is not supported for loading openCypher data.</p> <p>
     * <i>Allowed values</i>: <code>"TRUE"</code>, <code>"FALSE"</code>.</p> <p>
     * <i>Default value</i>: <code>"FALSE"</code>.</p> <p>By default, or when
     * <code>updateSingleCardinalityProperties</code> is explicitly set to
     * <code>"FALSE"</code>, the loader treats a new value as an error, because it
     * violates single cardinality.</p> <p>When
     * <code>updateSingleCardinalityProperties</code> is set to <code>"TRUE"</code>, on
     * the other hand, the bulk loader replaces the existing value with the new one. If
     * multiple edge or single-cardinality vertex property values are provided in the
     * source file(s) being loaded, the final value at the end of the bulk load could
     * be any one of those new values. The loader only guarantees that the existing
     * value has been replaced by one of the new ones.</p>
     */
    inline bool UpdateSingleCardinalityPropertiesHasBeenSet() const { return m_updateSingleCardinalityPropertiesHasBeenSet; }

    /**
     * <p> <code>updateSingleCardinalityProperties</code> is an optional parameter that
     * controls how the bulk loader treats a new value for single-cardinality vertex or
     * edge properties. This is not supported for loading openCypher data.</p> <p>
     * <i>Allowed values</i>: <code>"TRUE"</code>, <code>"FALSE"</code>.</p> <p>
     * <i>Default value</i>: <code>"FALSE"</code>.</p> <p>By default, or when
     * <code>updateSingleCardinalityProperties</code> is explicitly set to
     * <code>"FALSE"</code>, the loader treats a new value as an error, because it
     * violates single cardinality.</p> <p>When
     * <code>updateSingleCardinalityProperties</code> is set to <code>"TRUE"</code>, on
     * the other hand, the bulk loader replaces the existing value with the new one. If
     * multiple edge or single-cardinality vertex property values are provided in the
     * source file(s) being loaded, the final value at the end of the bulk load could
     * be any one of those new values. The loader only guarantees that the existing
     * value has been replaced by one of the new ones.</p>
     */
    inline void SetUpdateSingleCardinalityProperties(bool value) { m_updateSingleCardinalityPropertiesHasBeenSet = true; m_updateSingleCardinalityProperties = value; }

    /**
     * <p> <code>updateSingleCardinalityProperties</code> is an optional parameter that
     * controls how the bulk loader treats a new value for single-cardinality vertex or
     * edge properties. This is not supported for loading openCypher data.</p> <p>
     * <i>Allowed values</i>: <code>"TRUE"</code>, <code>"FALSE"</code>.</p> <p>
     * <i>Default value</i>: <code>"FALSE"</code>.</p> <p>By default, or when
     * <code>updateSingleCardinalityProperties</code> is explicitly set to
     * <code>"FALSE"</code>, the loader treats a new value as an error, because it
     * violates single cardinality.</p> <p>When
     * <code>updateSingleCardinalityProperties</code> is set to <code>"TRUE"</code>, on
     * the other hand, the bulk loader replaces the existing value with the new one. If
     * multiple edge or single-cardinality vertex property values are provided in the
     * source file(s) being loaded, the final value at the end of the bulk load could
     * be any one of those new values. The loader only guarantees that the existing
     * value has been replaced by one of the new ones.</p>
     */
    inline StartLoaderJobRequest& WithUpdateSingleCardinalityProperties(bool value) { SetUpdateSingleCardinalityProperties(value); return *this;}


    /**
     * <p>This is an optional flag parameter that indicates whether the load request
     * can be queued up or not. </p> <p>You don't have to wait for one load job to
     * complete before issuing the next one, because Neptune can queue up as many as 64
     * jobs at a time, provided that their <code>queueRequest</code> parameters are all
     * set to <code>"TRUE"</code>. The queue order of the jobs will be
     * first-in-first-out (FIFO).</p> <p>If the <code>queueRequest</code> parameter is
     * omitted or set to <code>"FALSE"</code>, the load request will fail if another
     * load job is already running.</p> <p> <i>Allowed values</i>: <code>"TRUE"</code>,
     * <code>"FALSE"</code>.</p> <p> <i>Default value</i>: <code>"FALSE"</code>.</p>
     */
    inline bool GetQueueRequest() const{ return m_queueRequest; }

    /**
     * <p>This is an optional flag parameter that indicates whether the load request
     * can be queued up or not. </p> <p>You don't have to wait for one load job to
     * complete before issuing the next one, because Neptune can queue up as many as 64
     * jobs at a time, provided that their <code>queueRequest</code> parameters are all
     * set to <code>"TRUE"</code>. The queue order of the jobs will be
     * first-in-first-out (FIFO).</p> <p>If the <code>queueRequest</code> parameter is
     * omitted or set to <code>"FALSE"</code>, the load request will fail if another
     * load job is already running.</p> <p> <i>Allowed values</i>: <code>"TRUE"</code>,
     * <code>"FALSE"</code>.</p> <p> <i>Default value</i>: <code>"FALSE"</code>.</p>
     */
    inline bool QueueRequestHasBeenSet() const { return m_queueRequestHasBeenSet; }

    /**
     * <p>This is an optional flag parameter that indicates whether the load request
     * can be queued up or not. </p> <p>You don't have to wait for one load job to
     * complete before issuing the next one, because Neptune can queue up as many as 64
     * jobs at a time, provided that their <code>queueRequest</code> parameters are all
     * set to <code>"TRUE"</code>. The queue order of the jobs will be
     * first-in-first-out (FIFO).</p> <p>If the <code>queueRequest</code> parameter is
     * omitted or set to <code>"FALSE"</code>, the load request will fail if another
     * load job is already running.</p> <p> <i>Allowed values</i>: <code>"TRUE"</code>,
     * <code>"FALSE"</code>.</p> <p> <i>Default value</i>: <code>"FALSE"</code>.</p>
     */
    inline void SetQueueRequest(bool value) { m_queueRequestHasBeenSet = true; m_queueRequest = value; }

    /**
     * <p>This is an optional flag parameter that indicates whether the load request
     * can be queued up or not. </p> <p>You don't have to wait for one load job to
     * complete before issuing the next one, because Neptune can queue up as many as 64
     * jobs at a time, provided that their <code>queueRequest</code> parameters are all
     * set to <code>"TRUE"</code>. The queue order of the jobs will be
     * first-in-first-out (FIFO).</p> <p>If the <code>queueRequest</code> parameter is
     * omitted or set to <code>"FALSE"</code>, the load request will fail if another
     * load job is already running.</p> <p> <i>Allowed values</i>: <code>"TRUE"</code>,
     * <code>"FALSE"</code>.</p> <p> <i>Default value</i>: <code>"FALSE"</code>.</p>
     */
    inline StartLoaderJobRequest& WithQueueRequest(bool value) { SetQueueRequest(value); return *this;}


    /**
     * <p>This is an optional parameter that can make a queued load request contingent
     * on the successful completion of one or more previous jobs in the queue.</p>
     * <p>Neptune can queue up as many as 64 load requests at a time, if their
     * <code>queueRequest</code> parameters are set to <code>"TRUE"</code>. The
     * <code>dependencies</code> parameter lets you make execution of such a queued
     * request dependent on the successful completion of one or more specified previous
     * requests in the queue.</p> <p>For example, if load <code>Job-A</code> and
     * <code>Job-B</code> are independent of each other, but load <code>Job-C</code>
     * needs <code>Job-A</code> and <code>Job-B</code> to be finished before it begins,
     * proceed as follows:</p> <ol> <li> <p>Submit <code>load-job-A</code> and
     * <code>load-job-B</code> one after another in any order, and save their
     * load-ids.</p> </li> <li> <p>Submit <code>load-job-C</code> with the load-ids of
     * the two jobs in its <code>dependencies</code> field:</p> </li> </ol> <p>Because
     * of the <code>dependencies</code> parameter, the bulk loader will not start
     * <code>Job-C</code> until <code>Job-A</code> and <code>Job-B</code> have
     * completed successfully. If either one of them fails, Job-C will not be executed,
     * and its status will be set to
     * <code>LOAD_FAILED_BECAUSE_DEPENDENCY_NOT_SATISFIED</code>.</p> <p>You can set up
     * multiple levels of dependency in this way, so that the failure of one job will
     * cause all requests that are directly or indirectly dependent on it to be
     * cancelled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDependencies() const{ return m_dependencies; }

    /**
     * <p>This is an optional parameter that can make a queued load request contingent
     * on the successful completion of one or more previous jobs in the queue.</p>
     * <p>Neptune can queue up as many as 64 load requests at a time, if their
     * <code>queueRequest</code> parameters are set to <code>"TRUE"</code>. The
     * <code>dependencies</code> parameter lets you make execution of such a queued
     * request dependent on the successful completion of one or more specified previous
     * requests in the queue.</p> <p>For example, if load <code>Job-A</code> and
     * <code>Job-B</code> are independent of each other, but load <code>Job-C</code>
     * needs <code>Job-A</code> and <code>Job-B</code> to be finished before it begins,
     * proceed as follows:</p> <ol> <li> <p>Submit <code>load-job-A</code> and
     * <code>load-job-B</code> one after another in any order, and save their
     * load-ids.</p> </li> <li> <p>Submit <code>load-job-C</code> with the load-ids of
     * the two jobs in its <code>dependencies</code> field:</p> </li> </ol> <p>Because
     * of the <code>dependencies</code> parameter, the bulk loader will not start
     * <code>Job-C</code> until <code>Job-A</code> and <code>Job-B</code> have
     * completed successfully. If either one of them fails, Job-C will not be executed,
     * and its status will be set to
     * <code>LOAD_FAILED_BECAUSE_DEPENDENCY_NOT_SATISFIED</code>.</p> <p>You can set up
     * multiple levels of dependency in this way, so that the failure of one job will
     * cause all requests that are directly or indirectly dependent on it to be
     * cancelled.</p>
     */
    inline bool DependenciesHasBeenSet() const { return m_dependenciesHasBeenSet; }

    /**
     * <p>This is an optional parameter that can make a queued load request contingent
     * on the successful completion of one or more previous jobs in the queue.</p>
     * <p>Neptune can queue up as many as 64 load requests at a time, if their
     * <code>queueRequest</code> parameters are set to <code>"TRUE"</code>. The
     * <code>dependencies</code> parameter lets you make execution of such a queued
     * request dependent on the successful completion of one or more specified previous
     * requests in the queue.</p> <p>For example, if load <code>Job-A</code> and
     * <code>Job-B</code> are independent of each other, but load <code>Job-C</code>
     * needs <code>Job-A</code> and <code>Job-B</code> to be finished before it begins,
     * proceed as follows:</p> <ol> <li> <p>Submit <code>load-job-A</code> and
     * <code>load-job-B</code> one after another in any order, and save their
     * load-ids.</p> </li> <li> <p>Submit <code>load-job-C</code> with the load-ids of
     * the two jobs in its <code>dependencies</code> field:</p> </li> </ol> <p>Because
     * of the <code>dependencies</code> parameter, the bulk loader will not start
     * <code>Job-C</code> until <code>Job-A</code> and <code>Job-B</code> have
     * completed successfully. If either one of them fails, Job-C will not be executed,
     * and its status will be set to
     * <code>LOAD_FAILED_BECAUSE_DEPENDENCY_NOT_SATISFIED</code>.</p> <p>You can set up
     * multiple levels of dependency in this way, so that the failure of one job will
     * cause all requests that are directly or indirectly dependent on it to be
     * cancelled.</p>
     */
    inline void SetDependencies(const Aws::Vector<Aws::String>& value) { m_dependenciesHasBeenSet = true; m_dependencies = value; }

    /**
     * <p>This is an optional parameter that can make a queued load request contingent
     * on the successful completion of one or more previous jobs in the queue.</p>
     * <p>Neptune can queue up as many as 64 load requests at a time, if their
     * <code>queueRequest</code> parameters are set to <code>"TRUE"</code>. The
     * <code>dependencies</code> parameter lets you make execution of such a queued
     * request dependent on the successful completion of one or more specified previous
     * requests in the queue.</p> <p>For example, if load <code>Job-A</code> and
     * <code>Job-B</code> are independent of each other, but load <code>Job-C</code>
     * needs <code>Job-A</code> and <code>Job-B</code> to be finished before it begins,
     * proceed as follows:</p> <ol> <li> <p>Submit <code>load-job-A</code> and
     * <code>load-job-B</code> one after another in any order, and save their
     * load-ids.</p> </li> <li> <p>Submit <code>load-job-C</code> with the load-ids of
     * the two jobs in its <code>dependencies</code> field:</p> </li> </ol> <p>Because
     * of the <code>dependencies</code> parameter, the bulk loader will not start
     * <code>Job-C</code> until <code>Job-A</code> and <code>Job-B</code> have
     * completed successfully. If either one of them fails, Job-C will not be executed,
     * and its status will be set to
     * <code>LOAD_FAILED_BECAUSE_DEPENDENCY_NOT_SATISFIED</code>.</p> <p>You can set up
     * multiple levels of dependency in this way, so that the failure of one job will
     * cause all requests that are directly or indirectly dependent on it to be
     * cancelled.</p>
     */
    inline void SetDependencies(Aws::Vector<Aws::String>&& value) { m_dependenciesHasBeenSet = true; m_dependencies = std::move(value); }

    /**
     * <p>This is an optional parameter that can make a queued load request contingent
     * on the successful completion of one or more previous jobs in the queue.</p>
     * <p>Neptune can queue up as many as 64 load requests at a time, if their
     * <code>queueRequest</code> parameters are set to <code>"TRUE"</code>. The
     * <code>dependencies</code> parameter lets you make execution of such a queued
     * request dependent on the successful completion of one or more specified previous
     * requests in the queue.</p> <p>For example, if load <code>Job-A</code> and
     * <code>Job-B</code> are independent of each other, but load <code>Job-C</code>
     * needs <code>Job-A</code> and <code>Job-B</code> to be finished before it begins,
     * proceed as follows:</p> <ol> <li> <p>Submit <code>load-job-A</code> and
     * <code>load-job-B</code> one after another in any order, and save their
     * load-ids.</p> </li> <li> <p>Submit <code>load-job-C</code> with the load-ids of
     * the two jobs in its <code>dependencies</code> field:</p> </li> </ol> <p>Because
     * of the <code>dependencies</code> parameter, the bulk loader will not start
     * <code>Job-C</code> until <code>Job-A</code> and <code>Job-B</code> have
     * completed successfully. If either one of them fails, Job-C will not be executed,
     * and its status will be set to
     * <code>LOAD_FAILED_BECAUSE_DEPENDENCY_NOT_SATISFIED</code>.</p> <p>You can set up
     * multiple levels of dependency in this way, so that the failure of one job will
     * cause all requests that are directly or indirectly dependent on it to be
     * cancelled.</p>
     */
    inline StartLoaderJobRequest& WithDependencies(const Aws::Vector<Aws::String>& value) { SetDependencies(value); return *this;}

    /**
     * <p>This is an optional parameter that can make a queued load request contingent
     * on the successful completion of one or more previous jobs in the queue.</p>
     * <p>Neptune can queue up as many as 64 load requests at a time, if their
     * <code>queueRequest</code> parameters are set to <code>"TRUE"</code>. The
     * <code>dependencies</code> parameter lets you make execution of such a queued
     * request dependent on the successful completion of one or more specified previous
     * requests in the queue.</p> <p>For example, if load <code>Job-A</code> and
     * <code>Job-B</code> are independent of each other, but load <code>Job-C</code>
     * needs <code>Job-A</code> and <code>Job-B</code> to be finished before it begins,
     * proceed as follows:</p> <ol> <li> <p>Submit <code>load-job-A</code> and
     * <code>load-job-B</code> one after another in any order, and save their
     * load-ids.</p> </li> <li> <p>Submit <code>load-job-C</code> with the load-ids of
     * the two jobs in its <code>dependencies</code> field:</p> </li> </ol> <p>Because
     * of the <code>dependencies</code> parameter, the bulk loader will not start
     * <code>Job-C</code> until <code>Job-A</code> and <code>Job-B</code> have
     * completed successfully. If either one of them fails, Job-C will not be executed,
     * and its status will be set to
     * <code>LOAD_FAILED_BECAUSE_DEPENDENCY_NOT_SATISFIED</code>.</p> <p>You can set up
     * multiple levels of dependency in this way, so that the failure of one job will
     * cause all requests that are directly or indirectly dependent on it to be
     * cancelled.</p>
     */
    inline StartLoaderJobRequest& WithDependencies(Aws::Vector<Aws::String>&& value) { SetDependencies(std::move(value)); return *this;}

    /**
     * <p>This is an optional parameter that can make a queued load request contingent
     * on the successful completion of one or more previous jobs in the queue.</p>
     * <p>Neptune can queue up as many as 64 load requests at a time, if their
     * <code>queueRequest</code> parameters are set to <code>"TRUE"</code>. The
     * <code>dependencies</code> parameter lets you make execution of such a queued
     * request dependent on the successful completion of one or more specified previous
     * requests in the queue.</p> <p>For example, if load <code>Job-A</code> and
     * <code>Job-B</code> are independent of each other, but load <code>Job-C</code>
     * needs <code>Job-A</code> and <code>Job-B</code> to be finished before it begins,
     * proceed as follows:</p> <ol> <li> <p>Submit <code>load-job-A</code> and
     * <code>load-job-B</code> one after another in any order, and save their
     * load-ids.</p> </li> <li> <p>Submit <code>load-job-C</code> with the load-ids of
     * the two jobs in its <code>dependencies</code> field:</p> </li> </ol> <p>Because
     * of the <code>dependencies</code> parameter, the bulk loader will not start
     * <code>Job-C</code> until <code>Job-A</code> and <code>Job-B</code> have
     * completed successfully. If either one of them fails, Job-C will not be executed,
     * and its status will be set to
     * <code>LOAD_FAILED_BECAUSE_DEPENDENCY_NOT_SATISFIED</code>.</p> <p>You can set up
     * multiple levels of dependency in this way, so that the failure of one job will
     * cause all requests that are directly or indirectly dependent on it to be
     * cancelled.</p>
     */
    inline StartLoaderJobRequest& AddDependencies(const Aws::String& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(value); return *this; }

    /**
     * <p>This is an optional parameter that can make a queued load request contingent
     * on the successful completion of one or more previous jobs in the queue.</p>
     * <p>Neptune can queue up as many as 64 load requests at a time, if their
     * <code>queueRequest</code> parameters are set to <code>"TRUE"</code>. The
     * <code>dependencies</code> parameter lets you make execution of such a queued
     * request dependent on the successful completion of one or more specified previous
     * requests in the queue.</p> <p>For example, if load <code>Job-A</code> and
     * <code>Job-B</code> are independent of each other, but load <code>Job-C</code>
     * needs <code>Job-A</code> and <code>Job-B</code> to be finished before it begins,
     * proceed as follows:</p> <ol> <li> <p>Submit <code>load-job-A</code> and
     * <code>load-job-B</code> one after another in any order, and save their
     * load-ids.</p> </li> <li> <p>Submit <code>load-job-C</code> with the load-ids of
     * the two jobs in its <code>dependencies</code> field:</p> </li> </ol> <p>Because
     * of the <code>dependencies</code> parameter, the bulk loader will not start
     * <code>Job-C</code> until <code>Job-A</code> and <code>Job-B</code> have
     * completed successfully. If either one of them fails, Job-C will not be executed,
     * and its status will be set to
     * <code>LOAD_FAILED_BECAUSE_DEPENDENCY_NOT_SATISFIED</code>.</p> <p>You can set up
     * multiple levels of dependency in this way, so that the failure of one job will
     * cause all requests that are directly or indirectly dependent on it to be
     * cancelled.</p>
     */
    inline StartLoaderJobRequest& AddDependencies(Aws::String&& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(std::move(value)); return *this; }

    /**
     * <p>This is an optional parameter that can make a queued load request contingent
     * on the successful completion of one or more previous jobs in the queue.</p>
     * <p>Neptune can queue up as many as 64 load requests at a time, if their
     * <code>queueRequest</code> parameters are set to <code>"TRUE"</code>. The
     * <code>dependencies</code> parameter lets you make execution of such a queued
     * request dependent on the successful completion of one or more specified previous
     * requests in the queue.</p> <p>For example, if load <code>Job-A</code> and
     * <code>Job-B</code> are independent of each other, but load <code>Job-C</code>
     * needs <code>Job-A</code> and <code>Job-B</code> to be finished before it begins,
     * proceed as follows:</p> <ol> <li> <p>Submit <code>load-job-A</code> and
     * <code>load-job-B</code> one after another in any order, and save their
     * load-ids.</p> </li> <li> <p>Submit <code>load-job-C</code> with the load-ids of
     * the two jobs in its <code>dependencies</code> field:</p> </li> </ol> <p>Because
     * of the <code>dependencies</code> parameter, the bulk loader will not start
     * <code>Job-C</code> until <code>Job-A</code> and <code>Job-B</code> have
     * completed successfully. If either one of them fails, Job-C will not be executed,
     * and its status will be set to
     * <code>LOAD_FAILED_BECAUSE_DEPENDENCY_NOT_SATISFIED</code>.</p> <p>You can set up
     * multiple levels of dependency in this way, so that the failure of one job will
     * cause all requests that are directly or indirectly dependent on it to be
     * cancelled.</p>
     */
    inline StartLoaderJobRequest& AddDependencies(const char* value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(value); return *this; }


    /**
     * <p>This parameter is required only when loading openCypher data that contains
     * relationship IDs. It must be included and set to <code>True</code> when
     * openCypher relationship IDs are explicitly provided in the load data
     * (recommended).</p> <p>When <code>userProvidedEdgeIds</code> is absent or set to
     * <code>True</code>, an <code>:ID</code> column must be present in every
     * relationship file in the load.</p> <p>When <code>userProvidedEdgeIds</code> is
     * present and set to <code>False</code>, relationship files in the load <b>must
     * not</b> contain an <code>:ID</code> column. Instead, the Neptune loader
     * automatically generates an ID for each relationship.</p> <p>It's useful to
     * provide relationship IDs explicitly so that the loader can resume loading after
     * error in the CSV data have been fixed, without having to reload any
     * relationships that have already been loaded. If relationship IDs have not been
     * explicitly assigned, the loader cannot resume a failed load if any relationship
     * file has had to be corrected, and must instead reload all the relationships.</p>
     */
    inline bool GetUserProvidedEdgeIds() const{ return m_userProvidedEdgeIds; }

    /**
     * <p>This parameter is required only when loading openCypher data that contains
     * relationship IDs. It must be included and set to <code>True</code> when
     * openCypher relationship IDs are explicitly provided in the load data
     * (recommended).</p> <p>When <code>userProvidedEdgeIds</code> is absent or set to
     * <code>True</code>, an <code>:ID</code> column must be present in every
     * relationship file in the load.</p> <p>When <code>userProvidedEdgeIds</code> is
     * present and set to <code>False</code>, relationship files in the load <b>must
     * not</b> contain an <code>:ID</code> column. Instead, the Neptune loader
     * automatically generates an ID for each relationship.</p> <p>It's useful to
     * provide relationship IDs explicitly so that the loader can resume loading after
     * error in the CSV data have been fixed, without having to reload any
     * relationships that have already been loaded. If relationship IDs have not been
     * explicitly assigned, the loader cannot resume a failed load if any relationship
     * file has had to be corrected, and must instead reload all the relationships.</p>
     */
    inline bool UserProvidedEdgeIdsHasBeenSet() const { return m_userProvidedEdgeIdsHasBeenSet; }

    /**
     * <p>This parameter is required only when loading openCypher data that contains
     * relationship IDs. It must be included and set to <code>True</code> when
     * openCypher relationship IDs are explicitly provided in the load data
     * (recommended).</p> <p>When <code>userProvidedEdgeIds</code> is absent or set to
     * <code>True</code>, an <code>:ID</code> column must be present in every
     * relationship file in the load.</p> <p>When <code>userProvidedEdgeIds</code> is
     * present and set to <code>False</code>, relationship files in the load <b>must
     * not</b> contain an <code>:ID</code> column. Instead, the Neptune loader
     * automatically generates an ID for each relationship.</p> <p>It's useful to
     * provide relationship IDs explicitly so that the loader can resume loading after
     * error in the CSV data have been fixed, without having to reload any
     * relationships that have already been loaded. If relationship IDs have not been
     * explicitly assigned, the loader cannot resume a failed load if any relationship
     * file has had to be corrected, and must instead reload all the relationships.</p>
     */
    inline void SetUserProvidedEdgeIds(bool value) { m_userProvidedEdgeIdsHasBeenSet = true; m_userProvidedEdgeIds = value; }

    /**
     * <p>This parameter is required only when loading openCypher data that contains
     * relationship IDs. It must be included and set to <code>True</code> when
     * openCypher relationship IDs are explicitly provided in the load data
     * (recommended).</p> <p>When <code>userProvidedEdgeIds</code> is absent or set to
     * <code>True</code>, an <code>:ID</code> column must be present in every
     * relationship file in the load.</p> <p>When <code>userProvidedEdgeIds</code> is
     * present and set to <code>False</code>, relationship files in the load <b>must
     * not</b> contain an <code>:ID</code> column. Instead, the Neptune loader
     * automatically generates an ID for each relationship.</p> <p>It's useful to
     * provide relationship IDs explicitly so that the loader can resume loading after
     * error in the CSV data have been fixed, without having to reload any
     * relationships that have already been loaded. If relationship IDs have not been
     * explicitly assigned, the loader cannot resume a failed load if any relationship
     * file has had to be corrected, and must instead reload all the relationships.</p>
     */
    inline StartLoaderJobRequest& WithUserProvidedEdgeIds(bool value) { SetUserProvidedEdgeIds(value); return *this;}

  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Format m_format;
    bool m_formatHasBeenSet = false;

    S3BucketRegion m_s3BucketRegion;
    bool m_s3BucketRegionHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Mode m_mode;
    bool m_modeHasBeenSet = false;

    bool m_failOnError;
    bool m_failOnErrorHasBeenSet = false;

    Parallelism m_parallelism;
    bool m_parallelismHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parserConfiguration;
    bool m_parserConfigurationHasBeenSet = false;

    bool m_updateSingleCardinalityProperties;
    bool m_updateSingleCardinalityPropertiesHasBeenSet = false;

    bool m_queueRequest;
    bool m_queueRequestHasBeenSet = false;

    Aws::Vector<Aws::String> m_dependencies;
    bool m_dependenciesHasBeenSet = false;

    bool m_userProvidedEdgeIds;
    bool m_userProvidedEdgeIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
